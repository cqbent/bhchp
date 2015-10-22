<?php
/**
 * @file
 * bhchp_ui_general.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bhchp_ui_general_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'file-image-field_image_category'.
  $field_instances['file-image-field_image_category'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'field_image_category',
    'label' => 'Image Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
      'wysiwyg_override' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image Category');

  return $field_instances;
}
