<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

function iphonebacgiang_preprocess_field(&$vars) {
  $element = $vars['element'];
  if ($element['#field_name'] == 'field_images') {
    //dpm($vars);
  }
}

/**
 * Field Collection-specific implementation of template_preprocess_entity().
 */
function iphonebacgiang_preprocess_node(&$vars) {
  $viewmode = $vars['elements']['#view_mode'];
  $node = $vars['elements']['#node'];
  array_splice( $vars['theme_hook_suggestions'], 1, 0, array('node__' . $node->type. '__'. $viewmode));
  if (isset($node->field_rating)) {
    $rating = field_get_items('node', $node, 'field_rating');
    if (!empty($rating)) {
      $vars['rating_count'] = format_plural($rating[0]['count'], '1 Review', '@count Reviews');;
    }
  }
}

/**
 * Implements hook_preprocess_HOOK().
 */
function iphonebacgiang_preprocess_comment(&$vars) {
  //dpm($vars);
}
