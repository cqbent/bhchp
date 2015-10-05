<?php
/**
 * @file
 * bhchp_patientstories.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function bhchp_patientstories_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|patient_story|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'patient_story';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|patient_story|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function bhchp_patientstories_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|patient_story|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'patient_story';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_patientstory_mainimage',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_patientstory_subtitle',
        3 => 'body',
        4 => 'back_to_parent',
      ),
    ),
    'fields' => array(
      'field_patientstory_mainimage' => 'left',
      'title' => 'right',
      'field_patientstory_subtitle' => 'right',
      'body' => 'right',
      'back_to_parent' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|patient_story|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|patient_story|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'patient_story';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_patientstory_mainimage',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_patientstory_subtitle',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'field_patientstory_mainimage' => 'left',
      'title' => 'right',
      'field_patientstory_subtitle' => 'right',
      'body' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|patient_story|teaser'] = $ds_layout;

  return $export;
}
