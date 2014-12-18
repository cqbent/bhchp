<?php
/**
 * @file
 * bhchp_ui_general.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bhchp_ui_general_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
