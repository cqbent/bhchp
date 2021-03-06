<?php
/**
 * @file
 * bhchp_location.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function bhchp_location_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'service_locations_importer';
  $feeds_importer->config = array(
    'name' => 'Service Locations Importer',
    'description' => 'Imbibes whole sheet of service locations',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => 'TAB',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'ServiceSite',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Address',
            'target' => 'field_address:thoroughfare',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'ZIP',
            'target' => 'field_address:postal_code',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'City',
            'target' => 'field_address:locality',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'HoursWk',
            'target' => 'field_hours_wk',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'State',
            'target' => 'field_address:administrative_area',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Country',
            'target' => 'field_address:country',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'location',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['service_locations_importer'] = $feeds_importer;

  return $export;
}
