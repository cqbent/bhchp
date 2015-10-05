<?php
/**
 * @file
 * bhchp_forms.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bhchp_forms_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-employment_application-field_address'
  $field_instances['entityform-employment_application-field_address'] = array(
    'bundle' => 'employment_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'US' => 'US',
        ),
        'default_country' => 'US',
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
          'address-optional' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'entityform-employment_application-field_application_conditions'
  $field_instances['entityform-employment_application-field_application_conditions'] = array(
    'bundle' => 'employment_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 41,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_application_conditions',
    'label' => 'Application Conditions',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'label_help_description' => '<p><strong>EMPLOYMENT AT WILL</strong><br />
I understand this application is not an employment contract nor can it be used to create a contract. Employment by Boston Health Care for the Homeless Program has no specific term, regardless of length of service, and may be terminated by the employee of Boston Health Care for the Homeless Program upon notice. I acknowledge that Boston Health Care for the Homeless Program has not made any promises or representations that differ from those contained in this paragraph. Promises or guarantees of employment on any other basis are not binding for Boston Health Care for the Homeless Program unless they are written and signed by the President or Executive Director of the program making such a promise.</p>

<p><strong>REFERENCES AND CREDENTIALING RELEASE</strong><br />
I hereby authorize Boston Health Care for the Homeless Program to check references and credentialing information, including but not limited to, verification of educational background. I further authorize any individual, company, business entity, institution, or government agency having relevant information to furnish Boston Health Care for the Homeless Program with that information.
I hereby release and agree to hold harmless any individual, company, business entity, institution, or government agency from liability with regard to furnishing that information to Boston Health Care for the Homeless Program. Further, I hereby agree to release and hold Boston Health Care for the Homeless Program harmless from all liability with respect to the receipt of such information.</p>

<p>I have read and understand all the above limitations on and conditions of my application and authorize the investigations, etc. referred to above.</p>',
      ),
      'type' => 'options_buttons',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'entityform-employment_application-field_application_email'
  $field_instances['entityform-employment_application-field_application_email'] = array(
    'bundle' => 'employment_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 44,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_application_email',
    'label' => 'Email',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'entityform-employment_application-field_applied_date'
  $field_instances['entityform-employment_application-field_applied_date'] = array(
    'bundle' => 'employment_application',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 32,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_applied_date',
    'label' => 'If Yes, Date (mm/dd/yyyy)',
    'required' => FALSE,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-employment_application-field_consent'
  $field_instances['entityform-employment_application-field_consent'] = array(
    'bundle' => 'employment_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 42,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_consent',
    'label' => 'Consent',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'label_help_description' => 'By typing your name below you give the above consent.',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 21,
    ),
  );

  // Exported field_instance:
  // 'entityform-employment_application-field_consent_date'
  $field_instances['entityform-employment_application-field_consent_date'] = array(
    'bundle' => 'employment_application',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 43,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_consent_date',
    'label' => 'Consent Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_help_description' => 'Date (mm/dd/yyyy)',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 22,
    ),
  );

  // Exported field_instance:
  // 'entityform-employment_application-field_documentation'
  $field_instances['entityform-employment_application-field_documentation'] = array(
    'bundle' => 'employment_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 40,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_documentation',
    'label' => 'Documentation',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'label_help_description' => '<p><strong>CERTIFICATION</strong></p>
<p>I certify that my answers in this application and in my personal interview(s) are true and correct. I agree that falsifying information may disqualify me from employment and, if hired, may be grounds for dismissal.</p>
<p><strong>RIGHT TO WORK VERIFICATION</strong></p>
<p>To work at Boston Health Care for the Homeless Program,rn I understand that I must show one of the following unexpired documents rnto establish my identity and right to work in the U.S.</p>
<ol>
<li>A U.S. passport or U.S. Passport Card</li>
<li>Permanent Resident Card or Alien Registration Receipt Card (Form 1-551) </li>
<li>Foreign passport with a temporary I-551 stamp </li>
<li>Employment Authorization Document that contains a photograph </li>
<li>Foreign passport with an unexpired Arrival-Departure record, I-94 </li>
<li> Passport from FSM or RMI with Form I-94 or Form I-94A indicating nonimmigrant addmission</li>
</ol>
<p>If you don’t have any of the above, you must present one identity document and one employment authorization document from the following lists:</p>
<p><strong>Identity Documents:</strong></p>
<ol>
<li>Driver’s license or similar document with a photograph or identifying information</li>
<li>Other documents authorized by the U.S. Attorney General</li>
</ol>
<p><strong>Employment Authorization:</strong></p>
<ol>
<li>Social security number card</li>
<li>Birth certificate or document establishing U.S. nationality at birth</li>
<li>Other documents authorized by the U.S. Attorney General</li>
</ol>
<p>I CAN PROVIDE DOCUMENTATION WHEN REQUIRED</p>',
      ),
      'type' => 'options_buttons',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'entityform-employment_application-field_employment_history'
  $field_instances['entityform-employment_application-field_employment_history'] = array(
    'bundle' => 'employment_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 38,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_employment_history',
    'label' => 'Employment History',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'entityform-employment_application-field_first_name'
  $field_instances['entityform-employment_application-field_first_name'] = array(
    'bundle' => 'employment_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_first_name',
    'label' => 'First Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'entityform-employment_application-field_hours_available'
  $field_instances['entityform-employment_application-field_hours_available'] = array(
    'bundle' => 'employment_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_hours_available',
    'label' => 'Hours available',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'entityform-employment_application-field_how_referred'
  $field_instances['entityform-employment_application-field_how_referred'] = array(
    'bundle' => 'employment_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_how_referred',
    'label' => 'How were you referred to Boston Health Care for the Homeless Program?',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'entityform-employment_application-field_job_position'
  $field_instances['entityform-employment_application-field_job_position'] = array(
    'bundle' => 'employment_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 47,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_job_position',
    'label' => 'Job Position',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 23,
    ),
  );

  // Exported field_instance:
  // 'entityform-employment_application-field_last_name'
  $field_instances['entityform-employment_application-field_last_name'] = array(
    'bundle' => 'employment_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_last_name',
    'label' => 'Last Name',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'entityform-employment_application-field_name_of_employee_source'
  $field_instances['entityform-employment_application-field_name_of_employee_source'] = array(
    'bundle' => 'employment_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 36,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_name_of_employee_source',
    'label' => 'Name of Employee/Source',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'entityform-employment_application-field_other_names_used'
  $field_instances['entityform-employment_application-field_other_names_used'] = array(
    'bundle' => 'employment_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 46,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_other_names_used',
    'label' => 'Other Names Used',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'entityform-employment_application-field_personal_references'
  $field_instances['entityform-employment_application-field_personal_references'] = array(
    'bundle' => 'employment_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 39,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_personal_references',
    'label' => 'Personal References',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(
        'label_help_description' => '<strong>CERTIFICATION</strong>
I certify that my answers in this application and in my personal interview(s) are true and correct. I agree that falsifying information may disqualify me from employment and, if hired, may be grounds for dismissal.

RIGHT TO WORK VERIFICATION
To work at Boston Health Care for the Homeless Program,rn I understand that I must show one of the following unexpired documents rnto establish my identity and right to work in the U.S.
1.    A U.S. passport or U.S. Passport Card 
2.    Permanent Resident Card or Alien Registration Receipt Card (Form 1-551) 
3.    Foreign passport with a temporary I-551 stamp 
4.    Employment Authorization Document that contains a photograph 
5.    Foreign passport with an unexpired Arrival-Departure record, I-94 
6.    Passport from FSM or RMI with Form I-94 or Form I-94A indicating nonimmigrant addmission

If you don’t have any of the above, you must present one identity document and one employment authorization document from the following lists:

Identity Documents:
1.   Driver’s license or similar document with a photograph or identifying information
2.   Other documents authorized by the U.S. Attorney General
 
Employment Authorization:
1.   Social security number card
2.   Birth certificate or document establishing U.S. nationality at birth
3.   Other documents authorized by the U.S. Attorney General',
      ),
      'type' => 'field_collection_embed',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'entityform-employment_application-field_phone_day'
  $field_instances['entityform-employment_application-field_phone_day'] = array(
    'bundle' => 'employment_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 45,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_phone_day',
    'label' => 'Primary Phone',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'entityform-employment_application-field_previously_applied'
  $field_instances['entityform-employment_application-field_previously_applied'] = array(
    'bundle' => 'employment_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_previously_applied',
    'label' => 'Have you previously applied for employment at Boston Health Care for the Homeless Program?',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'entityform-employment_application-field_previously_employed_date'
  $field_instances['entityform-employment_application-field_previously_employed_date'] = array(
    'bundle' => 'employment_application',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_previously_employed_date',
    'label' => 'If Yes, Date (mm/dd/yyyy)',
    'required' => FALSE,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'entityform-employment_application-field_reviously_employed'
  $field_instances['entityform-employment_application-field_reviously_employed'] = array(
    'bundle' => 'employment_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_reviously_employed',
    'label' => 'Have you previously been employed by Boston Health Care for the Homeless Program?',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-employment_application-field_salary'
  $field_instances['entityform-employment_application-field_salary'] = array(
    'bundle' => 'employment_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_salary',
    'label' => 'Salary',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'entityform-employment_application-field_social_security'
  $field_instances['entityform-employment_application-field_social_security'] = array(
    'bundle' => 'employment_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'last 4 digits',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_social_security',
    'label' => 'Social Security',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 4,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'entityform-employment_application-field_start_date'
  $field_instances['entityform-employment_application-field_start_date'] = array(
    'bundle' => 'employment_application',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_start_date',
    'label' => 'Date you are available to start',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'entityform-employment_application-field_training_and_education'
  $field_instances['entityform-employment_application-field_training_and_education'] = array(
    'bundle' => 'employment_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 37,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_training_and_education',
    'label' => 'Training and Education',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'entityform-employment_application-field_work_availability'
  $field_instances['entityform-employment_application-field_work_availability'] = array(
    'bundle' => 'employment_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_work_availability',
    'label' => 'When are you available to work?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_date_birth'
  $field_instances['entityform-volunteer_internship_form-field_date_birth'] = array(
    'bundle' => 'volunteer_internship_form',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_date_birth',
    'label' => 'Date Birth',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-volunteer_internship_form-field_email'
  $field_instances['entityform-volunteer_internship_form-field_email'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_emergency_phone_number'
  $field_instances['entityform-volunteer_internship_form-field_emergency_phone_number'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_emergency_phone_number',
    'label' => 'Emergency Phone Number',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_employed'
  $field_instances['entityform-volunteer_internship_form-field_employed'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_employed',
    'label' => 'Employed',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_employer'
  $field_instances['entityform-volunteer_internship_form-field_employer'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_employer',
    'label' => 'Employer',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_ethnicity'
  $field_instances['entityform-volunteer_internship_form-field_ethnicity'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_ethnicity',
    'label' => 'Ethnicity (optional - for statistical purposes only)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 33,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_ethnicity_other'
  $field_instances['entityform-volunteer_internship_form-field_ethnicity_other'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_ethnicity_other',
    'label' => 'Ethnicity Other',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_experience_skills'
  $field_instances['entityform-volunteer_internship_form-field_experience_skills'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_experience_skills',
    'label' => 'Experience Skills',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 23,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_experience_to_gain'
  $field_instances['entityform-volunteer_internship_form-field_experience_to_gain'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_experience_to_gain',
    'label' => 'Experience to Gain',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 24,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_former_occupation'
  $field_instances['entityform-volunteer_internship_form-field_former_occupation'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_former_occupation',
    'label' => 'Former Occupation',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 21,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_full_name'
  $field_instances['entityform-volunteer_internship_form-field_full_name'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_full_name',
    'label' => 'Full Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_gender'
  $field_instances['entityform-volunteer_internship_form-field_gender'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_gender',
    'label' => 'Gender',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_have_car'
  $field_instances['entityform-volunteer_internship_form-field_have_car'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_have_car',
    'label' => 'Do you have a car',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 29,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_how_hear'
  $field_instances['entityform-volunteer_internship_form-field_how_hear'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_how_hear',
    'label' => 'How did you hear about us',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_is_student'
  $field_instances['entityform-volunteer_internship_form-field_is_student'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_is_student',
    'label' => 'Student?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_languages'
  $field_instances['entityform-volunteer_internship_form-field_languages'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_languages',
    'label' => 'Languages',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 25,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_letter_of_reference'
  $field_instances['entityform-volunteer_internship_form-field_letter_of_reference'] = array(
    'bundle' => 'volunteer_internship_form',
    'deleted' => 0,
    'description' => '*In addition to completing this application form, you must also submit two letters of reference from people who know you well (other than family). Emailed references will suffice. Email references may be sent tovolunteer@bhchp.org.

**Further, volunteers & interns will also be required to complete the following: Orientation, CORI check, immunization records, any necessary training.

***Please note:  Our internship opportunities are customized based on the applicant’s interest, BHCHP’s needs, and open positions.  We will do our best to create an internship that is varied and meets your needs, but cannot always guarantee a position.

If you cannot complete this application on line, please feel free to fax to (857) 654-1096 or mail to:

Volunteer Programs
Boston Health Care for the Homeless Program
780 Albany Street
Boston, MA 02118',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_letter_of_reference',
    'label' => 'Letter of Reference',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'volunteer_references',
      'file_extensions' => 'txt pdf docx doc xls rtf',
      'max_filesize' => '5 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'entityform-volunteer_internship_form-field_major'
  $field_instances['entityform-volunteer_internship_form-field_major'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_major',
    'label' => 'Major',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_monday_hours'
  $field_instances['entityform-volunteer_internship_form-field_monday_hours'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_monday_hours',
    'label' => 'Monday Hours',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 30,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_notify_name'
  $field_instances['entityform-volunteer_internship_form-field_notify_name'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_notify_name',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_occupation'
  $field_instances['entityform-volunteer_internship_form-field_occupation'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_occupation',
    'label' => 'Occupation',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_opportunity_interest'
  $field_instances['entityform-volunteer_internship_form-field_opportunity_interest'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 32,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_opportunity_interest',
    'label' => 'Please check all of the volunteer/internship opportunities that interest you:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_participation_hours'
  $field_instances['entityform-volunteer_internship_form-field_participation_hours'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_participation_hours',
    'label' => 'How many hours a week are you available',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 26,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_participation_length'
  $field_instances['entityform-volunteer_internship_form-field_participation_length'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_participation_length',
    'label' => 'Expected length of participation',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 27,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_phone_cell'
  $field_instances['entityform-volunteer_internship_form-field_phone_cell'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_phone_cell',
    'label' => 'Phone Cell',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_phone_day'
  $field_instances['entityform-volunteer_internship_form-field_phone_day'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_phone_day',
    'label' => 'Phone Day',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_phone_eve'
  $field_instances['entityform-volunteer_internship_form-field_phone_eve'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_phone_eve',
    'label' => 'Phone Eve',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_position_type'
  $field_instances['entityform-volunteer_internship_form-field_position_type'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_position_type',
    'label' => 'Please select which you are applying for',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_prior_experience'
  $field_instances['entityform-volunteer_internship_form-field_prior_experience'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_prior_experience',
    'label' => 'Prior Volunteer/Internship Experience',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 22,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_relationship'
  $field_instances['entityform-volunteer_internship_form-field_relationship'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_relationship',
    'label' => 'Relationship',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_retired'
  $field_instances['entityform-volunteer_internship_form-field_retired'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_retired',
    'label' => 'Retired',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_school'
  $field_instances['entityform-volunteer_internship_form-field_school'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_school',
    'label' => 'School',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_start_date'
  $field_instances['entityform-volunteer_internship_form-field_start_date'] = array(
    'bundle' => 'volunteer_internship_form',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_start_date',
    'label' => 'Date you are available to start',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 28,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_test_address'
  $field_instances['entityform-volunteer_internship_form-field_test_address'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_test_address',
    'label' => 'Home Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'US' => 'US',
        ),
        'default_country' => 'US',
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
          'address-optional' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'entityform-volunteer_internship_form-field_tuesday_hours'
  $field_instances['entityform-volunteer_internship_form-field_tuesday_hours'] = array(
    'bundle' => 'volunteer_internship_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_tuesday_hours',
    'label' => 'Tuesday Hours',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_employment_history-field_description_of_duties'
  $field_instances['field_collection_item-field_employment_history-field_description_of_duties'] = array(
    'bundle' => 'field_employment_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_description_of_duties',
    'label' => 'Description of Duties',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_employment_history-field_employer_address'
  $field_instances['field_collection_item-field_employment_history-field_employer_address'] = array(
    'bundle' => 'field_employment_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_employer_address',
    'label' => 'Employer Address',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_employment_history-field_employer_telephone_number'
  $field_instances['field_collection_item-field_employment_history-field_employer_telephone_number'] = array(
    'bundle' => 'field_employment_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_employer_telephone_number',
    'label' => 'Telephone Number',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_employment_history-field_employment_dates'
  $field_instances['field_collection_item-field_employment_history-field_employment_dates'] = array(
    'bundle' => 'field_employment_history',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_employment_dates',
    'label' => 'Employment Dates',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_employment_history-field_ending_position'
  $field_instances['field_collection_item-field_employment_history-field_ending_position'] = array(
    'bundle' => 'field_employment_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_ending_position',
    'label' => 'Ending Position',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_employment_history-field_ending_salary'
  $field_instances['field_collection_item-field_employment_history-field_ending_salary'] = array(
    'bundle' => 'field_employment_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_ending_salary',
    'label' => 'Ending Salary',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_employment_history-field_may_contact_employ'
  $field_instances['field_collection_item-field_employment_history-field_may_contact_employ'] = array(
    'bundle' => 'field_employment_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_may_contact_employ',
    'label' => 'May we contact this employer?',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_employment_history-field_previous_employer'
  $field_instances['field_collection_item-field_employment_history-field_previous_employer'] = array(
    'bundle' => 'field_employment_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_previous_employer',
    'label' => 'Previous Employer',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_employment_history-field_reason_for_leaving'
  $field_instances['field_collection_item-field_employment_history-field_reason_for_leaving'] = array(
    'bundle' => 'field_employment_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_reason_for_leaving',
    'label' => 'Reason for Leaving',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_employment_history-field_starting_position'
  $field_instances['field_collection_item-field_employment_history-field_starting_position'] = array(
    'bundle' => 'field_employment_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_starting_position',
    'label' => 'Starting Position',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_employment_history-field_starting_salary'
  $field_instances['field_collection_item-field_employment_history-field_starting_salary'] = array(
    'bundle' => 'field_employment_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_starting_salary',
    'label' => 'Starting Salary',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_employment_history-field_supervisor_manager'
  $field_instances['field_collection_item-field_employment_history-field_supervisor_manager'] = array(
    'bundle' => 'field_employment_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_supervisor_manager',
    'label' => 'Supervisor/Manager',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_personal_references-field_reference_business'
  $field_instances['field_collection_item-field_personal_references-field_reference_business'] = array(
    'bundle' => 'field_personal_references',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_reference_business',
    'label' => 'Reference Business',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_personal_references-field_reference_email_address'
  $field_instances['field_collection_item-field_personal_references-field_reference_email_address'] = array(
    'bundle' => 'field_personal_references',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_reference_email_address',
    'label' => 'Email Address, preferred',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_personal_references-field_reference_name_and_title'
  $field_instances['field_collection_item-field_personal_references-field_reference_name_and_title'] = array(
    'bundle' => 'field_personal_references',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_reference_name_and_title',
    'label' => 'Name and Title',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_personal_references-field_reference_relationship'
  $field_instances['field_collection_item-field_personal_references-field_reference_relationship'] = array(
    'bundle' => 'field_personal_references',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '(i.e. supervisor, co-worker)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_reference_relationship',
    'label' => 'Relationship to you',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_personal_references-field_reference_telephone'
  $field_instances['field_collection_item-field_personal_references-field_reference_telephone'] = array(
    'bundle' => 'field_personal_references',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_reference_telephone',
    'label' => 'Reference Telephone',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_training_and_education-field_dates_attended'
  $field_instances['field_collection_item-field_training_and_education-field_dates_attended'] = array(
    'bundle' => 'field_training_and_education',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_dates_attended',
    'label' => 'Dates Attended',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_training_and_education-field_did_graduate'
  $field_instances['field_collection_item-field_training_and_education-field_did_graduate'] = array(
    'bundle' => 'field_training_and_education',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_did_graduate',
    'label' => 'Did you Graduate?',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_training_and_education-field_diplomas_degree'
  $field_instances['field_collection_item-field_training_and_education-field_diplomas_degree'] = array(
    'bundle' => 'field_training_and_education',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_diplomas_degree',
    'label' => 'Diplomas/Degree',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_training_and_education-field_field_of_study'
  $field_instances['field_collection_item-field_training_and_education-field_field_of_study'] = array(
    'bundle' => 'field_training_and_education',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_field_of_study',
    'label' => 'Field of Study',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_training_and_education-field_name_and_location'
  $field_instances['field_collection_item-field_training_and_education-field_name_and_location'] = array(
    'bundle' => 'field_training_and_education',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '(You need not furnish school name if it indicates religious affiliation.)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_name_and_location',
    'label' => 'Name and Location',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('(You need not furnish school name if it indicates religious affiliation.)');
  t('(i.e. supervisor, co-worker)');
  t('*In addition to completing this application form, you must also submit two letters of reference from people who know you well (other than family). Emailed references will suffice. Email references may be sent tovolunteer@bhchp.org.

**Further, volunteers & interns will also be required to complete the following: Orientation, CORI check, immunization records, any necessary training.

***Please note:  Our internship opportunities are customized based on the applicant’s interest, BHCHP’s needs, and open positions.  We will do our best to create an internship that is varied and meets your needs, but cannot always guarantee a position.

If you cannot complete this application on line, please feel free to fax to (857) 654-1096 or mail to:

Volunteer Programs
Boston Health Care for the Homeless Program
780 Albany Street
Boston, MA 02118');
  t('Address');
  t('Application Conditions');
  t('Consent');
  t('Consent Date');
  t('Date Birth');
  t('Date you are available to start');
  t('Dates Attended');
  t('Description of Duties');
  t('Did you Graduate?');
  t('Diplomas/Degree');
  t('Do you have a car');
  t('Documentation');
  t('Email');
  t('Email Address, preferred');
  t('Emergency Phone Number');
  t('Employed');
  t('Employer');
  t('Employer Address');
  t('Employment Dates');
  t('Employment History');
  t('Ending Position');
  t('Ending Salary');
  t('Ethnicity (optional - for statistical purposes only)');
  t('Ethnicity Other');
  t('Expected length of participation');
  t('Experience Skills');
  t('Experience to Gain');
  t('Field of Study');
  t('First Name');
  t('Former Occupation');
  t('Full Name');
  t('Gender');
  t('Have you previously applied for employment at Boston Health Care for the Homeless Program?');
  t('Have you previously been employed by Boston Health Care for the Homeless Program?');
  t('Home Address');
  t('Hours available');
  t('How did you hear about us');
  t('How many hours a week are you available');
  t('How were you referred to Boston Health Care for the Homeless Program?');
  t('If Yes, Date (mm/dd/yyyy)');
  t('Job Position');
  t('Languages');
  t('Last Name');
  t('Letter of Reference');
  t('Major');
  t('May we contact this employer?');
  t('Monday Hours');
  t('Name');
  t('Name and Location');
  t('Name and Title');
  t('Name of Employee/Source');
  t('Occupation');
  t('Other Names Used');
  t('Personal References');
  t('Phone Cell');
  t('Phone Day');
  t('Phone Eve');
  t('Please check all of the volunteer/internship opportunities that interest you:');
  t('Please select which you are applying for');
  t('Previous Employer');
  t('Primary Phone');
  t('Prior Volunteer/Internship Experience');
  t('Reason for Leaving');
  t('Reference Business');
  t('Reference Telephone');
  t('Relationship');
  t('Relationship to you');
  t('Retired');
  t('Salary');
  t('School');
  t('Social Security');
  t('Starting Position');
  t('Starting Salary');
  t('Student?');
  t('Supervisor/Manager');
  t('Telephone Number');
  t('Training and Education');
  t('Tuesday Hours');
  t('When are you available to work?');
  t('last 4 digits');

  return $field_instances;
}
