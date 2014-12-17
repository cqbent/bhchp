<?php
/**
 * @file
 * bhchp_jobs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bhchp_jobs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bhchp_jobs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bhchp_jobs_node_info() {
  $items = array(
    'job_posting' => array(
      'name' => t('Job posting'),
      'base' => 'node_content',
      'description' => t('For job postings. Please use "date published" set to indicate "date posted" for job posting.'),
      'has_title' => '1',
      'title_label' => t('Job Title'),
      'help' => t('Please use "date published" set to indicate "date posted" for job posting.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
