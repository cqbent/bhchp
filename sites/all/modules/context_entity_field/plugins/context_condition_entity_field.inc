<?php

/**
 * @file
 * Implement context condiction class for entity field value.
 */

/**
 * Expose entity field as a context condition.
 */
class context_condition_entity_field extends context_condition {
  /**
   * Omit condition values. We will provide a custom input form for our conditions.
   */
  public function condition_values() {
    return array();
  }

  /**
   * Condition form.
   */
  public function condition_form($context) {
    $form = array();
    $defaults = $this->fetch_from_context($context, 'values');

    $entity_types = array();
    foreach (entity_get_info() as $entity_type_name => $entity_type) {
      $entity_types[$entity_type_name] = $entity_type['label'];
    }

    $fields_name = array_keys(field_info_fields());
    $fields_name = array_combine($fields_name, $fields_name);
    asort($fields_name);

    $form['entity_type'] = array(
      '#title' => t('Entity type'),
      '#type' => 'checkboxes',
      '#options' => $entity_types,
      '#description' => t('Select entity type to check'),
      '#default_value' => isset($defaults['entity_type']) ? unserialize($defaults['entity_type']) : array(),
    );

    $form['field_name'] = array(
      '#title' => t('Field name'),
      '#type' => 'select',
      '#options' => $fields_name,
      '#description' => t('Select entity field to check'),
      '#default_value' => isset($defaults['field_name']) ? $defaults['field_name'] : TRUE,
    );

    $form['field_status'] = array(
      '#title' => t('Field status'),
      '#type' => 'select',
      '#options' => array(
        'all'   => t('All value'),
        'empty' => t('Empty value'),
        'match' => t('Match'),
      ),
      '#description' => t('Status of field to evaluate.'),
      '#default_value' => isset($defaults['field_status']) ? $defaults['field_status'] : TRUE,
    );

    $form['field_value'] = array(
      '#title' => t('Field value'),
      '#type' => 'textfield',
      '#description' => t('Write the entity field value to compare'),
      '#default_value' => isset($defaults['field_value']) ? $defaults['field_value'] : TRUE,
      '#states' => array(
        'visible' => array(
          ':input[name*="field_status"]' => array('value' => 'match'),
        ),
      ),
    );

    return $form;
  }

  /**
   * Condition form submit handler.
   */
  public function condition_form_submit($values) {
    $values['field_empty']  = isset($values['field_empty']) ? $values['field_empty'] : FALSE;
    $values['field_status'] = !isset($values['field_status']) && !is_string($values['field_status']) ? 'empty' : $values['field_status'];

    return array(
      'entity_type'  => serialize(array_filter($values['entity_type'])),
      'field_name'   => $values['field_name'],
      'field_status' => $values['field_status'],
      'field_value'  => $values['field_value'],
    );
  }

  /**
   * Execute.
   */
  public function execute($entity_type, $entity) {
    if ($this->condition_used()) {
      foreach ($this->get_contexts() as $context) {
        $settings = $this->fetch_from_context($context, 'values');

        if (in_array($entity_type, array_filter(unserialize($settings['entity_type'])))) {
          $items = field_get_items($entity_type, $entity, $settings['field_name']);

          // Field do not exist.
          if ($items === FALSE && !isset($entity->{$settings['field_name']})) {
            continue;
          }

          // Field value is empty.
          if ($settings['field_status'] == 'empty' && $items === FALSE) {
            $this->condition_met($context);
          }

          // Field value is not empty.
          if ($settings['field_status'] == 'all' && $items !== FALSE) {
            $this->condition_met($context);
          }

          // Field value match.
          if ($settings['field_status'] == 'match' && $items) {
            // Enable control on all field values.
            $values = $this->get_field_multiple_value($settings['field_name'], $items);

            // Control value in available values.
            if (in_array($settings['field_value'], $values)) {
              $this->condition_met($context);
            }
          }
        }
      }
    }
  }

  /**
   * Get values for specified field.
   *
   * @param string $field_name
   *   Name of field to check.
   *
   * @param array $items
   *   List of field items.
   *
   * @return array
   *   List of all field items value.
   */
  protected function get_field_multiple_value($field_name, $items) {
    $values = array();

    // Loop on all field items.
    foreach ($items as $item) {
      // Get value for the current field type.
      $value = $this->get_field_value($field_name, $item);

      // Add to list of values.
      $values[] = $value;
    }

    return $values;
  }

  /**
   * Get value for specified field.
   *
   * @param string $field_name
   *   Name of field to check.
   *
   * @param array $item
   *   Field items.
   *
   * @return mixed
   *   Vield values.
   */
  protected function get_field_value($field_name, $item) {
    // Load field information; field_info_field already use static value, so
    // is not required other caching layer on this code.
    $field_info = field_info_field($field_name);

    // List off value keys managed.
    $field_value = array(
      'taxonomy_term_reference' => 'tid',
      'node_reference' => 'nid',
      'user_reference' => 'uid',
      'entityreference' => 'target_id',
    );

    // Extract values_keys for current field.
    $type = $field_info['type'];
    $value_key = isset($field_value[$type]) ? $field_value[$type] : 'value';

    // Value (if exist).
    $value = isset($item[$value_key]) ? $item[$value_key] : NULL;

    return $value;
  }
}
