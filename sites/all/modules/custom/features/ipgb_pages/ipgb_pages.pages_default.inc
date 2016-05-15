<?php
/**
 * @file
 * ipgb_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ipgb_pages_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__mobile';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Mobile',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'hide-page-title page-full',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'mobile',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'mobile' => 'mobile',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_content' => NULL,
      'left_content' => NULL,
      'middle_content' => NULL,
      'bottom_content' => NULL,
      'top_content_left' => NULL,
      'top_content_right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7a17d8a9-b733-4b52-aa16-988b450f0f4d';
  $display->subtitle = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3926ee35-21eb-4c0a-a11c-2b0a7117d33f';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'kaka',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3926ee35-21eb-4c0a-a11c-2b0a7117d33f';
    $display->content['new-3926ee35-21eb-4c0a-a11c-2b0a7117d33f'] = $pane;
    $display->panels['middle'][0] = 'new-3926ee35-21eb-4c0a-a11c-2b0a7117d33f';
    $pane = new stdClass();
    $pane->pid = 'new-c57a836e-ae0f-41a5-b974-56368ff8e993';
    $pane->panel = 'middle';
    $pane->type = 'anchor_link_product_display';
    $pane->subtype = 'anchor_link_product_display';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'anchor-links-product',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c57a836e-ae0f-41a5-b974-56368ff8e993';
    $display->content['new-c57a836e-ae0f-41a5-b974-56368ff8e993'] = $pane;
    $display->panels['middle'][1] = 'new-c57a836e-ae0f-41a5-b974-56368ff8e993';
    $pane = new stdClass();
    $pane->pid = 'new-e6811c19-7e63-4141-8b1a-0113dda4a949';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_features_overview';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Tổng quan sản phẩm',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'overview',
      'css_class' => 'container border-title',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e6811c19-7e63-4141-8b1a-0113dda4a949';
    $display->content['new-e6811c19-7e63-4141-8b1a-0113dda4a949'] = $pane;
    $display->panels['middle'][2] = 'new-e6811c19-7e63-4141-8b1a-0113dda4a949';
    $pane = new stdClass();
    $pane->pid = 'new-39798b2e-4c95-4017-a310-2971275c8266';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_features_full';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
        'edit' => 'Edit',
        'delete' => 'Delete',
        'add' => 'Add',
        'description' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Tính năng',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container border-title',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '39798b2e-4c95-4017-a310-2971275c8266';
    $display->content['new-39798b2e-4c95-4017-a310-2971275c8266'] = $pane;
    $display->panels['middle'][3] = 'new-39798b2e-4c95-4017-a310-2971275c8266';
    $pane = new stdClass();
    $pane->pid = 'new-2875af7d-6866-4987-828f-1e2b73b060ea';
    $pane->panel = 'middle';
    $pane->type = 'node_comment_wrapper';
    $pane->subtype = 'node_comment_wrapper';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '10',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => 'Reviews',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'review',
      'css_class' => 'border-title container',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '2875af7d-6866-4987-828f-1e2b73b060ea';
    $display->content['new-2875af7d-6866-4987-828f-1e2b73b060ea'] = $pane;
    $display->panels['middle'][4] = 'new-2875af7d-6866-4987-828f-1e2b73b060ea';
    $pane = new stdClass();
    $pane->pid = 'new-6490dea7-5f4a-4c69-98e2-92b13d230bd3';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_technical_overview';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'technical',
      'css_class' => 'container border-title',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '6490dea7-5f4a-4c69-98e2-92b13d230bd3';
    $display->content['new-6490dea7-5f4a-4c69-98e2-92b13d230bd3'] = $pane;
    $display->panels['middle'][5] = 'new-6490dea7-5f4a-4c69-98e2-92b13d230bd3';
    $pane = new stdClass();
    $pane->pid = 'new-b6b84709-b373-4b75-b417-5ccfd844875c';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_body_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Thông số kĩ thuật chi tiết',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container border-title',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'b6b84709-b373-4b75-b417-5ccfd844875c';
    $display->content['new-b6b84709-b373-4b75-b417-5ccfd844875c'] = $pane;
    $display->panels['middle'][6] = 'new-b6b84709-b373-4b75-b417-5ccfd844875c';
    $pane = new stdClass();
    $pane->pid = 'new-38b8b64b-287d-4e3d-88a7-383221d11b29';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'products';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'related',
      'css_class' => 'border-title container',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '38b8b64b-287d-4e3d-88a7-383221d11b29';
    $display->content['new-38b8b64b-287d-4e3d-88a7-383221d11b29'] = $pane;
    $display->panels['middle'][7] = 'new-38b8b64b-287d-4e3d-88a7-383221d11b29';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__mobile'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_938b17c4-6dd6-4377-8309-877e88805f43';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'lion';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_content' => NULL,
      'left_content' => NULL,
      'middle_content' => NULL,
      'bottom_content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7a17d8a9-b733-4b52-aa16-988b450f0f4d';
  $display->subtitle = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-270e64f2-89a6-4fa0-9d2d-8611551afdc1';
    $pane->panel = 'middle_content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '270e64f2-89a6-4fa0-9d2d-8611551afdc1';
    $display->content['new-270e64f2-89a6-4fa0-9d2d-8611551afdc1'] = $pane;
    $display->panels['middle_content'][0] = 'new-270e64f2-89a6-4fa0-9d2d-8611551afdc1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-270e64f2-89a6-4fa0-9d2d-8611551afdc1';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_938b17c4-6dd6-4377-8309-877e88805f43'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__product';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Site template: Node product',
    'no_blocks' => 1,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Commerce Order from User (on commerce_order.owner)',
        'keyword' => 'user',
        'name' => 'entity_from_schema:uid-user-commerce_order',
        'context' => 'logged-in-user',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'accessory' => 'accessory',
              'app_mobile' => 'app_mobile',
              'mobile' => 'mobile',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'pipeline' => 'standard',
    'name' => 'product',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'site_wide_full';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content',
          1 => 'sidebar',
        ),
        'parent' => 'main',
        'class' => 'main-content',
      ),
      'content' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => '100',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => '200',
        'width_type' => 'px',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
        ),
        'parent' => 'main',
        'class' => 'header',
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
      'sidebar' => NULL,
      'header' => NULL,
      'header_top' => NULL,
      'navigation' => NULL,
      'feature' => NULL,
      'breadcrumb' => NULL,
      'content_top' => NULL,
      'content_bottom' => NULL,
      'footer_panel_1' => NULL,
      'footer_panel_2' => NULL,
      'footer_panel_3' => NULL,
      'footer_panel_4' => NULL,
      'footer_top' => NULL,
      'footer' => NULL,
      'navigation_bottom' => NULL,
      'page_title' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bfb2e51f-f223-4e07-ac76-26a24cf43376';
  $display->subtitle = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-774b1b1e-9a6f-490a-a07f-023a5b7e7b1c';
    $pane->panel = 'breadcrumb';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '774b1b1e-9a6f-490a-a07f-023a5b7e7b1c';
    $display->content['new-774b1b1e-9a6f-490a-a07f-023a5b7e7b1c'] = $pane;
    $display->panels['breadcrumb'][0] = 'new-774b1b1e-9a6f-490a-a07f-023a5b7e7b1c';
    $pane = new stdClass();
    $pane->pid = 'new-240a854f-1e81-4f3a-98be-691741a75b8f';
    $pane->panel = 'content';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => 'page-title',
      'id' => '',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '240a854f-1e81-4f3a-98be-691741a75b8f';
    $display->content['new-240a854f-1e81-4f3a-98be-691741a75b8f'] = $pane;
    $display->panels['content'][0] = 'new-240a854f-1e81-4f3a-98be-691741a75b8f';
    $pane = new stdClass();
    $pane->pid = 'new-5b896e5a-9e67-4399-833d-665e524f310d';
    $pane->panel = 'content';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '5b896e5a-9e67-4399-833d-665e524f310d';
    $display->content['new-5b896e5a-9e67-4399-833d-665e524f310d'] = $pane;
    $display->panels['content'][1] = 'new-5b896e5a-9e67-4399-833d-665e524f310d';
    $pane = new stdClass();
    $pane->pid = 'new-9498668c-5b13-42e7-a229-95f00a12f204';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '9498668c-5b13-42e7-a229-95f00a12f204';
    $display->content['new-9498668c-5b13-42e7-a229-95f00a12f204'] = $pane;
    $display->panels['content'][2] = 'new-9498668c-5b13-42e7-a229-95f00a12f204';
    $pane = new stdClass();
    $pane->pid = 'new-163f28a5-6adb-4748-82e9-0e8c82823139';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'block-8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '163f28a5-6adb-4748-82e9-0e8c82823139';
    $display->content['new-163f28a5-6adb-4748-82e9-0e8c82823139'] = $pane;
    $display->panels['footer'][0] = 'new-163f28a5-6adb-4748-82e9-0e8c82823139';
    $pane = new stdClass();
    $pane->pid = 'new-78eafead-b3be-46c3-909f-52c356ed598e';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-social-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '78eafead-b3be-46c3-909f-52c356ed598e';
    $display->content['new-78eafead-b3be-46c3-909f-52c356ed598e'] = $pane;
    $display->panels['footer'][1] = 'new-78eafead-b3be-46c3-909f-52c356ed598e';
    $pane = new stdClass();
    $pane->pid = 'new-125ef5c4-bc69-48f3-a506-8d9300a2c658';
    $pane->panel = 'footer_panel_1';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'About store',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '125ef5c4-bc69-48f3-a506-8d9300a2c658';
    $display->content['new-125ef5c4-bc69-48f3-a506-8d9300a2c658'] = $pane;
    $display->panels['footer_panel_1'][0] = 'new-125ef5c4-bc69-48f3-a506-8d9300a2c658';
    $pane = new stdClass();
    $pane->pid = 'new-cc4d79dd-d297-4d70-839b-65111d1fe027';
    $pane->panel = 'footer_panel_2';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Menu',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc4d79dd-d297-4d70-839b-65111d1fe027';
    $display->content['new-cc4d79dd-d297-4d70-839b-65111d1fe027'] = $pane;
    $display->panels['footer_panel_2'][0] = 'new-cc4d79dd-d297-4d70-839b-65111d1fe027';
    $pane = new stdClass();
    $pane->pid = 'new-a4456ba3-df16-49c9-a38f-18ca2b2ade5a';
    $pane->panel = 'footer_panel_3';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a4456ba3-df16-49c9-a38f-18ca2b2ade5a';
    $display->content['new-a4456ba3-df16-49c9-a38f-18ca2b2ade5a'] = $pane;
    $display->panels['footer_panel_3'][0] = 'new-a4456ba3-df16-49c9-a38f-18ca2b2ade5a';
    $pane = new stdClass();
    $pane->pid = 'new-d02cb3ee-b5b7-4d5b-b81d-f6407b45eada';
    $pane->panel = 'footer_panel_4';
    $pane->type = 'block';
    $pane->subtype = 'block-14';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Bạn có thắc mắc',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd02cb3ee-b5b7-4d5b-b81d-f6407b45eada';
    $display->content['new-d02cb3ee-b5b7-4d5b-b81d-f6407b45eada'] = $pane;
    $display->panels['footer_panel_4'][0] = 'new-d02cb3ee-b5b7-4d5b-b81d-f6407b45eada';
    $pane = new stdClass();
    $pane->pid = 'new-5ae3cb12-2c78-45ad-ba9c-935bd39955f9';
    $pane->panel = 'header';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-4',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5ae3cb12-2c78-45ad-ba9c-935bd39955f9';
    $display->content['new-5ae3cb12-2c78-45ad-ba9c-935bd39955f9'] = $pane;
    $display->panels['header'][0] = 'new-5ae3cb12-2c78-45ad-ba9c-935bd39955f9';
    $pane = new stdClass();
    $pane->pid = 'new-6deb6153-747b-4f5e-ae50-c1cd19f14fc4';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-4',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6deb6153-747b-4f5e-ae50-c1cd19f14fc4';
    $display->content['new-6deb6153-747b-4f5e-ae50-c1cd19f14fc4'] = $pane;
    $display->panels['header'][1] = 'new-6deb6153-747b-4f5e-ae50-c1cd19f14fc4';
    $pane = new stdClass();
    $pane->pid = 'new-c4360e5c-efae-4e3a-9593-bd9a8a360850';
    $pane->panel = 'header_top';
    $pane->type = 'block';
    $pane->subtype = 'system-user-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c4360e5c-efae-4e3a-9593-bd9a8a360850';
    $display->content['new-c4360e5c-efae-4e3a-9593-bd9a8a360850'] = $pane;
    $display->panels['header_top'][0] = 'new-c4360e5c-efae-4e3a-9593-bd9a8a360850';
    $pane = new stdClass();
    $pane->pid = 'new-04127c43-e897-423f-bf7a-02356ef96bc7';
    $pane->panel = 'navigation';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '04127c43-e897-423f-bf7a-02356ef96bc7';
    $display->content['new-04127c43-e897-423f-bf7a-02356ef96bc7'] = $pane;
    $display->panels['navigation'][0] = 'new-04127c43-e897-423f-bf7a-02356ef96bc7';
    $pane = new stdClass();
    $pane->pid = 'new-8f958ef7-c3a2-4517-b903-6ca1772c34f3';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8f958ef7-c3a2-4517-b903-6ca1772c34f3';
    $display->content['new-8f958ef7-c3a2-4517-b903-6ca1772c34f3'] = $pane;
    $display->panels['navigation'][1] = 'new-8f958ef7-c3a2-4517-b903-6ca1772c34f3';
    $pane = new stdClass();
    $pane->pid = 'new-e4082998-8c7f-4d62-acfe-9a187a2b8031';
    $pane->panel = 'navigation_bottom';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e4082998-8c7f-4d62-acfe-9a187a2b8031';
    $display->content['new-e4082998-8c7f-4d62-acfe-9a187a2b8031'] = $pane;
    $display->panels['navigation_bottom'][0] = 'new-e4082998-8c7f-4d62-acfe-9a187a2b8031';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9498668c-5b13-42e7-a229-95f00a12f204';
  $handler->conf['display'] = $display;
  $export['site_template__product'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__site-wide';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Site wide',
    'no_blocks' => 1,
    'css_id' => 'page-wrapper',
    'css' => '/* set a fixed overall width */
  #page-wrapper > .panel-flexible-inside {
    width: 1020px;
    margin-left: auto;
    margin-right: auto;
  }

  /* Add some margin to the main content row. This class was set in the layout designer. */
  #page-wrapper .main-content {
    padding: 0 10px;
  }',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Commerce Order from User (on commerce_order.owner)',
        'keyword' => 'user',
        'name' => 'entity_from_schema:uid-user-commerce_order',
        'context' => 'logged-in-user',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'pipeline' => 'standard',
    'name' => 'site-wide',
  );
  $display = new panels_display();
  $display->layout = 'site_wide';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content',
          1 => 'sidebar',
        ),
        'parent' => 'main',
        'class' => 'main-content',
      ),
      'content' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => '100',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => '200',
        'width_type' => 'px',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
        ),
        'parent' => 'main',
        'class' => 'header',
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
      'sidebar' => NULL,
      'header' => NULL,
      'header_top' => NULL,
      'navigation' => NULL,
      'feature' => NULL,
      'breadcrumb' => NULL,
      'content_top' => NULL,
      'content_bottom' => NULL,
      'footer_panel_1' => NULL,
      'footer_panel_2' => NULL,
      'footer_panel_3' => NULL,
      'footer_panel_4' => NULL,
      'footer_top' => NULL,
      'footer' => NULL,
      'navigation_bottom' => NULL,
      'page_title' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bfb2e51f-f223-4e07-ac76-26a24cf43376';
  $display->subtitle = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-774b1b1e-9a6f-490a-a07f-023a5b7e7b1c';
    $pane->panel = 'breadcrumb';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '774b1b1e-9a6f-490a-a07f-023a5b7e7b1c';
    $display->content['new-774b1b1e-9a6f-490a-a07f-023a5b7e7b1c'] = $pane;
    $display->panels['breadcrumb'][0] = 'new-774b1b1e-9a6f-490a-a07f-023a5b7e7b1c';
    $pane = new stdClass();
    $pane->pid = 'new-5b896e5a-9e67-4399-833d-665e524f310d';
    $pane->panel = 'content';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'pane-message-tab-help',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '5b896e5a-9e67-4399-833d-665e524f310d';
    $display->content['new-5b896e5a-9e67-4399-833d-665e524f310d'] = $pane;
    $display->panels['content'][0] = 'new-5b896e5a-9e67-4399-833d-665e524f310d';
    $pane = new stdClass();
    $pane->pid = 'new-9498668c-5b13-42e7-a229-95f00a12f204';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '9498668c-5b13-42e7-a229-95f00a12f204';
    $display->content['new-9498668c-5b13-42e7-a229-95f00a12f204'] = $pane;
    $display->panels['content'][1] = 'new-9498668c-5b13-42e7-a229-95f00a12f204';
    $pane = new stdClass();
    $pane->pid = 'new-163f28a5-6adb-4748-82e9-0e8c82823139';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'block-8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '163f28a5-6adb-4748-82e9-0e8c82823139';
    $display->content['new-163f28a5-6adb-4748-82e9-0e8c82823139'] = $pane;
    $display->panels['footer'][0] = 'new-163f28a5-6adb-4748-82e9-0e8c82823139';
    $pane = new stdClass();
    $pane->pid = 'new-78eafead-b3be-46c3-909f-52c356ed598e';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-social-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '78eafead-b3be-46c3-909f-52c356ed598e';
    $display->content['new-78eafead-b3be-46c3-909f-52c356ed598e'] = $pane;
    $display->panels['footer'][1] = 'new-78eafead-b3be-46c3-909f-52c356ed598e';
    $pane = new stdClass();
    $pane->pid = 'new-125ef5c4-bc69-48f3-a506-8d9300a2c658';
    $pane->panel = 'footer_panel_1';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'About store',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '125ef5c4-bc69-48f3-a506-8d9300a2c658';
    $display->content['new-125ef5c4-bc69-48f3-a506-8d9300a2c658'] = $pane;
    $display->panels['footer_panel_1'][0] = 'new-125ef5c4-bc69-48f3-a506-8d9300a2c658';
    $pane = new stdClass();
    $pane->pid = 'new-cc4d79dd-d297-4d70-839b-65111d1fe027';
    $pane->panel = 'footer_panel_2';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Menu',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc4d79dd-d297-4d70-839b-65111d1fe027';
    $display->content['new-cc4d79dd-d297-4d70-839b-65111d1fe027'] = $pane;
    $display->panels['footer_panel_2'][0] = 'new-cc4d79dd-d297-4d70-839b-65111d1fe027';
    $pane = new stdClass();
    $pane->pid = 'new-a4456ba3-df16-49c9-a38f-18ca2b2ade5a';
    $pane->panel = 'footer_panel_3';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a4456ba3-df16-49c9-a38f-18ca2b2ade5a';
    $display->content['new-a4456ba3-df16-49c9-a38f-18ca2b2ade5a'] = $pane;
    $display->panels['footer_panel_3'][0] = 'new-a4456ba3-df16-49c9-a38f-18ca2b2ade5a';
    $pane = new stdClass();
    $pane->pid = 'new-d02cb3ee-b5b7-4d5b-b81d-f6407b45eada';
    $pane->panel = 'footer_panel_4';
    $pane->type = 'block';
    $pane->subtype = 'block-14';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Bạn có thắc mắc',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd02cb3ee-b5b7-4d5b-b81d-f6407b45eada';
    $display->content['new-d02cb3ee-b5b7-4d5b-b81d-f6407b45eada'] = $pane;
    $display->panels['footer_panel_4'][0] = 'new-d02cb3ee-b5b7-4d5b-b81d-f6407b45eada';
    $pane = new stdClass();
    $pane->pid = 'new-5ae3cb12-2c78-45ad-ba9c-935bd39955f9';
    $pane->panel = 'header';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-4',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5ae3cb12-2c78-45ad-ba9c-935bd39955f9';
    $display->content['new-5ae3cb12-2c78-45ad-ba9c-935bd39955f9'] = $pane;
    $display->panels['header'][0] = 'new-5ae3cb12-2c78-45ad-ba9c-935bd39955f9';
    $pane = new stdClass();
    $pane->pid = 'new-6deb6153-747b-4f5e-ae50-c1cd19f14fc4';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-4',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6deb6153-747b-4f5e-ae50-c1cd19f14fc4';
    $display->content['new-6deb6153-747b-4f5e-ae50-c1cd19f14fc4'] = $pane;
    $display->panels['header'][1] = 'new-6deb6153-747b-4f5e-ae50-c1cd19f14fc4';
    $pane = new stdClass();
    $pane->pid = 'new-c4360e5c-efae-4e3a-9593-bd9a8a360850';
    $pane->panel = 'header_top';
    $pane->type = 'block';
    $pane->subtype = 'system-user-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c4360e5c-efae-4e3a-9593-bd9a8a360850';
    $display->content['new-c4360e5c-efae-4e3a-9593-bd9a8a360850'] = $pane;
    $display->panels['header_top'][0] = 'new-c4360e5c-efae-4e3a-9593-bd9a8a360850';
    $pane = new stdClass();
    $pane->pid = 'new-04127c43-e897-423f-bf7a-02356ef96bc7';
    $pane->panel = 'navigation';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '04127c43-e897-423f-bf7a-02356ef96bc7';
    $display->content['new-04127c43-e897-423f-bf7a-02356ef96bc7'] = $pane;
    $display->panels['navigation'][0] = 'new-04127c43-e897-423f-bf7a-02356ef96bc7';
    $pane = new stdClass();
    $pane->pid = 'new-8f958ef7-c3a2-4517-b903-6ca1772c34f3';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8f958ef7-c3a2-4517-b903-6ca1772c34f3';
    $display->content['new-8f958ef7-c3a2-4517-b903-6ca1772c34f3'] = $pane;
    $display->panels['navigation'][1] = 'new-8f958ef7-c3a2-4517-b903-6ca1772c34f3';
    $pane = new stdClass();
    $pane->pid = 'new-e4082998-8c7f-4d62-acfe-9a187a2b8031';
    $pane->panel = 'navigation_bottom';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e4082998-8c7f-4d62-acfe-9a187a2b8031';
    $display->content['new-e4082998-8c7f-4d62-acfe-9a187a2b8031'] = $pane;
    $display->panels['navigation_bottom'][0] = 'new-e4082998-8c7f-4d62-acfe-9a187a2b8031';
    $pane = new stdClass();
    $pane->pid = 'new-240a854f-1e81-4f3a-98be-691741a75b8f';
    $pane->panel = 'page_title';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => 'page-title',
      'id' => '',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '240a854f-1e81-4f3a-98be-691741a75b8f';
    $display->content['new-240a854f-1e81-4f3a-98be-691741a75b8f'] = $pane;
    $display->panels['page_title'][0] = 'new-240a854f-1e81-4f3a-98be-691741a75b8f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9498668c-5b13-42e7-a229-95f00a12f204';
  $handler->conf['display'] = $display;
  $export['site_template__site-wide'] = $handler;

  return $export;
}
