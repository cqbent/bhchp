<?php
/**
 * @file
 * bhchp_forms.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bhchp_forms_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_days_hours_available|entityform|volunteer_internship_form|form';
  $field_group->group_name = 'group_days_hours_available';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'volunteer_internship_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Which days and hours are you available',
    'weight' => '32',
    'children' => array(
      0 => 'field_monday_hours',
      1 => 'field_tuesday_hours',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-days-hours-available field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_days_hours_available|entityform|volunteer_internship_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_expected_participation|entityform|volunteer_internship_form|form';
  $field_group->group_name = 'group_expected_participation';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'volunteer_internship_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Expected Participation',
    'weight' => '28',
    'children' => array(
      0 => 'field_participation_hours',
      1 => 'field_participation_length',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-expected-participation field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_expected_participation|entityform|volunteer_internship_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_notify|entityform|volunteer_internship_form|form';
  $field_group->group_name = 'group_notify';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'volunteer_internship_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Whome to notify in case of emergency?',
    'weight' => '9',
    'children' => array(
      0 => 'field_notify_name',
      1 => 'field_relationship',
      2 => 'field_emergency_phone_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-notify field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_notify|entityform|volunteer_internship_form|form'] = $field_group;

  return $export;
}
