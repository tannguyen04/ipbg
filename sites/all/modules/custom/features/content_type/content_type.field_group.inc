<?php
/**
 * @file
 * content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_avatar|node|mobile|form';
  $field_group->group_name = 'group_avatar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mobile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_media';
  $field_group->data = array(
    'label' => 'Avatar',
    'weight' => '2',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-avatar field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_avatar|node|mobile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features_full|node|mobile|form';
  $field_group->group_name = 'group_features_full';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mobile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_technical';
  $field_group->data = array(
    'label' => 'Features full',
    'weight' => '13',
    'children' => array(
      0 => 'field_features_full',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_features_full|node|mobile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features_overview|node|mobile|form';
  $field_group->group_name = 'group_features_overview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mobile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_technical';
  $field_group->data = array(
    'label' => 'Features Overview',
    'weight' => '12',
    'children' => array(
      0 => 'field_features_overview',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Features Overview',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_features_overview|node|mobile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_foliotextholder|node|app_mobile|teaser';
  $field_group->group_name = 'group_foliotextholder';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'app_mobile';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'foliotextholder',
    'weight' => '2',
    'children' => array(
      0 => 'group_foliotextwrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'foliotextholder',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-foliotextholder field-group-div foliotextholder',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_foliotextholder|node|app_mobile|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_foliotextholder|node|service|teaser';
  $field_group->group_name = 'group_foliotextholder';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'group_foliotextwrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-foliotextholder field-group-div foliotextholder',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_foliotextholder|node|service|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_foliotextwrapper|node|app_mobile|teaser';
  $field_group->group_name = 'group_foliotextwrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'app_mobile';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_foliotextholder';
  $field_group->data = array(
    'label' => 'foliotextwrapper',
    'weight' => '3',
    'children' => array(
      0 => 'field_product_price',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'foliotextwrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-foliotextwrapper field-group-div foliotextwrapper',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_foliotextwrapper|node|app_mobile|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_foliotextwrapper|node|service|teaser';
  $field_group->group_name = 'group_foliotextwrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_foliotextholder';
  $field_group->data = array(
    'label' => '',
    'weight' => '4',
    'children' => array(
      0 => 'field_mobile_price',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-foliotextwrapper field-group-div foliotextwrapper',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_foliotextwrapper|node|service|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery|node|mobile|form';
  $field_group->group_name = 'group_gallery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mobile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_media';
  $field_group->data = array(
    'label' => 'Gallery',
    'weight' => '3',
    'children' => array(
      0 => 'field_images',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gallery field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gallery|node|mobile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|accessory|full';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'accessory';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-image field-group-fieldset span7',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_image|node|accessory|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|app_mobile|full';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'app_mobile';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'image',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'image',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-image field-group-div span7',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_image|node|app_mobile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|service|full';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-image field-group-fieldset span7',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_image|node|service|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_infomation|node|accessory|full';
  $field_group->group_name = 'group_infomation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'accessory';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group infomation',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_product_manfacturer',
      2 => 'field_product_series',
      3 => 'field_mobile_price',
      4 => 'buy_now',
      5 => 'share_this',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group infomation',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-infomation field-group-div span5',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_infomation|node|accessory|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_infomation|node|app_mobile|full';
  $field_group->group_name = 'group_infomation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'app_mobile';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'infomation',
    'weight' => '1',
    'children' => array(
      0 => 'field_product_price',
      1 => 'field_app_series_ref',
      2 => 'buy_now',
      3 => 'share_this',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'infomation',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-infomation field-group-div span5',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_infomation|node|app_mobile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_infomation|node|service|full';
  $field_group->group_name = 'group_infomation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_mobile_price',
      2 => 'field_product_manfacturer',
      3 => 'field_product_series',
      4 => 'buy_now',
      5 => 'share_this',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-infomation field-group-div span5',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_infomation|node|service|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item_1|node|accessory|form';
  $field_group->group_name = 'group_item_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'accessory';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_product_info';
  $field_group->data = array(
    'label' => 'Thong tin chi tiet',
    'weight' => '17',
    'children' => array(
      0 => 'field_description_detail',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Thong tin chi tiet',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-item-1 field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_item_1|node|accessory|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item_2|node|accessory|form';
  $field_group->group_name = 'group_item_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'accessory';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_product_info';
  $field_group->data = array(
    'label' => 'Thong tin san pham',
    'weight' => '16',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Thong tin san pham',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-item-2 field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_item_2|node|accessory|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item|node|accessory|form';
  $field_group->group_name = 'group_item';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'accessory';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_product_info';
  $field_group->data = array(
    'label' => 'Thong so ki thuat',
    'weight' => '18',
    'children' => array(
      0 => 'field_data_sheet',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Thong so ki thuat',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-item field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_item|node|accessory|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mediaholder|node|app_mobile|teaser';
  $field_group->group_name = 'group_mediaholder';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'app_mobile';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'mediaholder',
    'weight' => '1',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'mediaholder',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-mediaholder field-group-fieldset mediaholder',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_mediaholder|node|app_mobile|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mediaholder|node|service|teaser';
  $field_group->group_name = 'group_mediaholder';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-mediaholder field-group-div mediaholder',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_mediaholder|node|service|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|mobile|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mobile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '2',
    'children' => array(
      0 => 'group_gallery',
      1 => 'group_avatar',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-media field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_media|node|mobile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_info|node|accessory|form';
  $field_group->group_name = 'group_product_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'accessory';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'group_item',
      1 => 'group_item_1',
      2 => 'group_item_2',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-product-info field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_product_info|node|accessory|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related|node|mobile|form';
  $field_group->group_name = 'group_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mobile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_technical';
  $field_group->data = array(
    'label' => 'Related',
    'weight' => '16',
    'children' => array(
      0 => 'field_node_related',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_related|node|mobile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technical_full|node|mobile|form';
  $field_group->group_name = 'group_technical_full';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mobile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_technical';
  $field_group->data = array(
    'label' => 'Technical Full',
    'weight' => '15',
    'children' => array(
      0 => 'field_body_box',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-technical-full field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_technical_full|node|mobile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technical_overview|node|mobile|form';
  $field_group->group_name = 'group_technical_overview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mobile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_technical';
  $field_group->data = array(
    'label' => 'Technical Overview',
    'weight' => '14',
    'children' => array(
      0 => 'field_technical_overview',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_technical_overview|node|mobile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technical|node|mobile|form';
  $field_group->group_name = 'group_technical';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mobile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Technical',
    'weight' => '13',
    'children' => array(
      0 => 'group_features_overview',
      1 => 'group_features_full',
      2 => 'group_technical_overview',
      3 => 'group_technical_full',
      4 => 'group_related',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-technical field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_technical|node|mobile|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Avatar');
  t('Features Overview');
  t('Features full');
  t('Gallery');
  t('Group infomation');
  t('Media');
  t('Related');
  t('Technical');
  t('Technical Full');
  t('Technical Overview');
  t('Thong so ki thuat');
  t('Thong tin chi tiet');
  t('Thong tin san pham');
  t('foliotextholder');
  t('foliotextwrapper');
  t('image');
  t('infomation');
  t('mediaholder');

  return $field_groups;
}
