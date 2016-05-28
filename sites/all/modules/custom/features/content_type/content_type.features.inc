<?php
/**
 * @file
 * content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_node_info() {
  $items = array(
    'accessory' => array(
      'name' => t('Phụ kiện'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'app_mobile' => array(
      'name' => t('App Mobile'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'blog_post' => array(
      'name' => t('Blog Post'),
      'base' => 'node_content',
      'description' => t('Use the <em>blog post</em> content type to manage blog nodes with the ThemeTastic theme.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'box_banner' => array(
      'name' => t('Box banner'),
      'base' => 'node_content',
      'description' => t('Box banner'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mobile' => array(
      'name' => t('Điện thoại'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'navigation' => array(
      'name' => t('Navigation'),
      'base' => 'node_content',
      'description' => t('Content build mega menu'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'service' => array(
      'name' => t('Service'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'slide' => array(
      'name' => t('Slide'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
