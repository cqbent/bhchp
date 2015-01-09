<?php
/**
 * @file
 * bhchp_testimonials.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function bhchp_testimonials_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'empty_testimonial_setting';
  $context->description = 'for random testimonials';
  $context->tag = '';
  $context->conditions = array(
    'entity_field' => array(
      'values' => array(
        'entity_type' => 'a:1:{s:4:"node";s:4:"node";}',
        'field_name' => 'field_page_testimonial',
        'field_status' => 'match',
        'field_value' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-testimonial_random-block' => array(
          'module' => 'views',
          'delta' => 'testimonial_random-block',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('for random testimonials');
  $export['empty_testimonial_setting'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'testimonial_picked';
  $context->description = 'for selected by entity reference';
  $context->tag = '';
  $context->conditions = array(
    'entity_field' => array(
      'values' => array(
        'entity_type' => 'a:1:{s:4:"node";s:4:"node";}',
        'field_name' => 'field_page_testimonial_entity',
        'field_status' => 'all',
        'field_value' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-testimonial_picked-block' => array(
          'module' => 'views',
          'delta' => 'testimonial_picked-block',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('for selected by entity reference');
  $export['testimonial_picked'] = $context;

  return $export;
}
