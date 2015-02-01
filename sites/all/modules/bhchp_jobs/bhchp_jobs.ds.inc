<?php
/**
 * @file
 * bhchp_jobs.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function bhchp_jobs_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|job_posting|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'job_posting';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'back_to_parent' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'contact_email' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|job_posting|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function bhchp_jobs_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'contact_email';
  $ds_field->label = 'contact email';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p>Contact <a href="mailto:jobs@bhchp.org?Subject=[node:title]">jobs@bhchp.org</a></p>
',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['contact_email'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function bhchp_jobs_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|job_posting|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'job_posting';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_date_posted',
        1 => 'field_department',
        2 => 'field_location',
        3 => 'field_job_hours',
        4 => 'field_grade_and_status',
        5 => 'body',
        6 => 'field_job_duties',
        7 => 'field_job_qualifications',
        8 => 'field_experience_education',
        9 => 'contact_email',
        10 => 'back_to_parent',
      ),
    ),
    'fields' => array(
      'field_date_posted' => 'ds_content',
      'field_department' => 'ds_content',
      'field_location' => 'ds_content',
      'field_job_hours' => 'ds_content',
      'field_grade_and_status' => 'ds_content',
      'body' => 'ds_content',
      'field_job_duties' => 'ds_content',
      'field_job_qualifications' => 'ds_content',
      'field_experience_education' => 'ds_content',
      'contact_email' => 'ds_content',
      'back_to_parent' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|job_posting|default'] = $ds_layout;

  return $export;
}
