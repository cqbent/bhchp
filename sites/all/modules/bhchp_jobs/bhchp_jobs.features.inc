<?php
/**
 * @file
 * bhchp_jobs.features.inc
 */

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
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('Embedded video'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}