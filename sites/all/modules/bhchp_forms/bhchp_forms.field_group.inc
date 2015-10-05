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
  $field_group->identifier = 'group_authorization|entityform|employment_application|form';
  $field_group->group_name = 'group_authorization';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'employment_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Authorization',
    'weight' => '6',
    'children' => array(
      0 => 'field_documentation',
      1 => 'field_application_conditions',
      2 => 'field_consent',
      3 => 'field_consent_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Authorization',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-authorization field-group-fieldset',
        'description' => 'IMPORTANT<br />
PLEASE READ CAREFULLY<br />
Authorization and Release',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_authorization|entityform|employment_application|form'] = $field_group;

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
  $field_group->identifier = 'group_employment_history|entityform|employment_application|form';
  $field_group->group_name = 'group_employment_history';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'employment_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Employment History',
    'weight' => '3',
    'children' => array(
      0 => 'field_employment_history',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-employment-history field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_employment_history|entityform|employment_application|form'] = $field_group;

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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal_information|entityform|employment_application|form';
  $field_group->group_name = 'group_personal_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'employment_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_address',
      1 => 'field_first_name',
      2 => 'field_last_name',
      3 => 'field_social_security',
      4 => 'field_email',
      5 => 'field_application_email',
      6 => 'field_phone_day',
      7 => 'field_other_names_used',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-personal-information field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_personal_information|entityform|employment_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal_references|entityform|employment_application|form';
  $field_group->group_name = 'group_personal_references';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'employment_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal References',
    'weight' => '4',
    'children' => array(
      0 => 'field_personal_references',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-personal-references field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_personal_references|entityform|employment_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_training_education|entityform|employment_application|form';
  $field_group->group_name = 'group_training_education';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'employment_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Training and Education',
    'weight' => '2',
    'children' => array(
      0 => 'field_training_and_education',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-training-education field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_training_education|entityform|employment_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_work_desired|entityform|employment_application|form';
  $field_group->group_name = 'group_work_desired';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'employment_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Types of Work Desired',
    'weight' => '1',
    'children' => array(
      0 => 'field_salary',
      1 => 'field_start_date',
      2 => 'field_work_availability',
      3 => 'field_hours_available',
      4 => 'field_previously_applied',
      5 => 'field_applied_date',
      6 => 'field_reviously_employed',
      7 => 'field_previously_employed_date',
      8 => 'field_how_referred',
      9 => 'field_name_of_employee_source',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-work-desired field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_work_desired|entityform|employment_application|form'] = $field_group;

  return $export;
}
