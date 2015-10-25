<?php
/**
 * @file
 * bhchp_ui_general.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bhchp_ui_general_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bhchp_ui_general_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function bhchp_ui_general_image_default_styles() {
  $styles = array();

  // Exported image style: homepage_images.
  $styles['homepage_images'] = array(
    'label' => 'Homepage Images',
    'effects' => array(),
  );

  // Exported image style: image_grid_thumbnails.
  $styles['image_grid_thumbnails'] = array(
    'label' => 'Image Grid Thumbnails',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
