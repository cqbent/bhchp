<?php
/**
 * @file
 * bhchp_ui_general.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function bhchp_ui_general_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'location_address';
  $formatter->label = 'Location Address';
  $formatter->description = '';
  $formatter->mode = 'token';
  $formatter->field_types = 'addressfield';
  $formatter->code = '[node:field_address:postal-code]';
  $formatter->fapi = '';
  $export['location_address'] = $formatter;

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'teaser_text_body';
  $formatter->label = 'teaser text body';
  $formatter->description = '';
  $formatter->mode = 'token';
  $formatter->field_types = 'text_with_summary';
  $formatter->code = '[node:summary] <a href="[node:url]">Read More</a>';
  $formatter->fapi = '';
  $export['teaser_text_body'] = $formatter;

  return $export;
}
