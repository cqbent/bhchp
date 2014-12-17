<?php
/**
 * @file
 * bhchp_location.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bhchp_location_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bhchp_location_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bhchp_location_node_info() {
  $items = array(
    'location' => array(
      'name' => t('Location'),
      'base' => 'node_content',
      'description' => t('A location node. Has a street address. Image, Hours and an addressfield which auto loads to geofield'),
      'has_title' => '1',
      'title_label' => t('Location name'),
      'help' => t('Has a street address. Image, Hours and an addressfield which auto loads to geofield'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
