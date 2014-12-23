<?php
/**
 * @file
 * bhchp_homepage_images.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bhchp_homepage_images_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bhchp_homepage_images_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bhchp_homepage_images_node_info() {
  $items = array(
    'homepage_images' => array(
      'name' => t('Homepage Images'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
