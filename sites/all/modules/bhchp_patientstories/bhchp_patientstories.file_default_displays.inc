<?php
/**
 * @file
 * bhchp_patientstories.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function bhchp_patientstories_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_image';
  $file_display->weight = 5;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'large',
  );
  $export['image__full__file_image'] = $file_display;

  return $export;
}
