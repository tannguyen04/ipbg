<?php

/**
 * @file
 * Contains the content type plugin for a mini panel. While this does not
 * need to be broken out into a .inc file, it's convenient that we do so
 * that we don't load code unnecessarily. Plus it demonstrates plugins
 * in modules other than Panels itself.
 *
 */

/**
 * Specially named hook. for .inc file. This looks a little silly due to the
 * redundancy, but that's really just because the content type shares a
 * name with the module.
 */
function panels_mini_panels_mini_ctools_content_types() {
  return array(
    'title' => t('Mini panels'),
    'content type' => 'panels_mini_panels_mini_content_type_content_type',
  );
}

/**
 * Return each available mini panel available as a subtype.
 */
function panels_mini_panels_mini_content_type_content_type($subtype_id, $plugin) {
  $mini = panels_mini_load($subtype_id);
  return _panels_mini_panels_mini_content_type_content_type($mini);
}

/**
 * Return each available mini panel available as a subtype.
 */
function panels_mini_panels_mini_content_type_content_types($plugin) {
  $types = array();
  foreach (panels_mini_load_all() as $mini) {
    $type = _panels_mini_panels_mini_content_type_content_type($mini);
    if ($type) {
      $types[$mini->name] = $type;
    }
  }
  return $types;
}

/**
 * Return an info array describing a single mini panel.
 */
function _panels_mini_panels_mini_content_type_content_type($mini) {
  if (empty($mini)) {
    // The mini panel is deleted or missing.
    return;
  }

  if (!empty($mini->disabled)) {
    return;
  }

  $title = filter_xss_admin($mini->admin_title);
  $type = array(
    'title' => $title,
    // For now mini panels will just use the contrib block icon.
    'icon' => 'icon_mini_panel.png',
    'description' => $title,
    'category' => !empty($mini->category) ? $mini->category : t('Mini panel'),
  );
  if (!empty($mini->requiredcontexts)) {
    $type['required context'] = array();
    foreach ($mini->requiredcontexts as $context) {
      $info = ctools_get_context($context['name']);
      // Check if the required context is actually required.
      if (!empty($context['optional'])) {
        $type['required context'][] = new ctools_context_optional($context['identifier'], $info['context name']);
      }
      else {
        $type['required context'][] = new ctools_context_required($context['identifier'], $info['context name']);
      }
    }
  }

  // Determine if this mini panel contains a pane that needs to be rendered
  // either first or last.  This is not perfect as it's possible for a mini
  // panel could contain both sorts of panes, but we'll prefer the setting for
  // the first one we come across.
  if (!empty($mini->display->content)) {
    foreach ($mini->display->content as $pane) {
      $content_type = ctools_content_get_subtype($pane->type, $pane->subtype);
      if (!empty($content_type['render last'])) {
        $type['render last'] = TRUE;
        break;
      }
      if (!empty($content_type['render first'])) {
        $type['render first'] = TRUE;
        break;
      }
    }
  }
  return $type;
}

/**
 * Render a mini panel called from a panels display.
 */
function panels_mini_panels_mini_content_type_render($subtype, $conf, $panel_args, &$contexts) {
  static $viewing = array();
  $mini = panels_mini_load($subtype);
  if (!$mini) {
    return FALSE;
  }
  if (!empty($viewing[$mini->name])) {
    return FALSE;
  }

  // Load up any contexts we might be using.
  $context = ctools_context_match_required_contexts($mini->requiredcontexts, $contexts);
  $mini->context = $mini->display->context = ctools_context_load_contexts($mini, FALSE, $context);

  if (empty($mini) || !empty($mini->disabled)) {
    return;
  }
  $viewing[$mini->name] = TRUE;

  $mini->display->args = $panel_args;
  $mini->display->css_id = panels_mini_get_id($subtype);
  $mini->display->owner = $mini;
  // unique ID of this mini.
  $mini->display->owner->id = $mini->name;

  $block = new stdClass();
  $block->module  = 'panels_mini';
  $block->delta   = $subtype;
  $block->content = panels_render_display($mini->display);
  $block->title = $mini->display->get_title();

  if (user_access('administer mini panels')) {
    $block->admin_links = array(
      array(
        'title' => t('Configure mini panel'),
        'href' => "admin/structure/mini-panels/list/$subtype/edit/content",
        'query' => drupal_get_destination(),
      ),
    );
  }

  unset($viewing[$mini->name]);
  return $block;
}

/**
 * Edit form for the mini panel content type.
 */
function panels_mini_panels_mini_content_type_edit_form($form, &$form_state) {
  // Empty form to ensure we have the override title + context gadgets.
  return $form;
}

/**
 * Provide the administrative title of a mini panel.
 */
function panels_mini_panels_mini_content_type_admin_title($subtype, $conf) {
  $mini = panels_mini_load($subtype);
  if (!$mini) {
    return t('Deleted/missing mini panel @name', array('@name' => $subtype));
  }

  $title = filter_xss_admin($mini->admin_title);
  if (empty($title)) {
    $title = t('Untitled mini panel');
  }
  return $title;
}

/**
 * Callback to provide administrative info. Provide links to edit the mini
 * panel.
 */
function panels_mini_panels_mini_content_type_admin_info($subtype, $conf) {
  $mini = panels_mini_load($subtype);
  if (!$mini) {
    return FALSE;
  }

  $block = new stdClass();
  $block->title = $mini->admin_title;
  $admin_pages = array(
    t('Settings') => 'basic',
    t('Context') => 'context',
    t('Layout') => 'layout',
    t('Content') => 'content',
  );

  $links = array();
  foreach ($admin_pages as $title => $tail) {
    $links[] = l($title, 'admin/structure/mini-panels/list/' . $subtype . '/edit/' . $tail, array('query' => drupal_get_destination()));
  }

  $block->content = theme('item_list', array('items' => $links));
  return $block;
}
