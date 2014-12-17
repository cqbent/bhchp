<?php
/**
 * @file
 * bhchp_event.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function bhchp_event_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'date_plus_location';
  $formatter->label = 'date plus location';
  $formatter->description = 'gives event needed date plus loccation';
  $formatter->mode = 'token';
  $formatter->field_types = 'text';
  $formatter->code = '[node:field_event_date] - [node:field_event_address:premise], [node:field_event_address:locality].';
  $formatter->fapi = '';
  $export['date_plus_location'] = $formatter;

  return $export;
}
