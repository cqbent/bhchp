<?php

/**
 * @file
 * Implement context condiction class for entity view mode.
 */

/**
 * Expose entity view mode as a context condition.
 */
class context_condition_entity_view_mode extends context_condition {
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
      foreach ($entity_type['view modes'] as $view_mode => $value) {
        $entity_types[$entity_type_name . '|' . $view_mode] = $entity_type['label'] . ' - ' . $value['label'];
      }
    }

    $form['entity_type'] = array(
      '#title' => t('Entity type'),
      '#type' => 'checkboxes',
      '#options' => $entity_types,
      '#description' => t('Select entity type to check'),
      '#default_value' => isset($defaults['entity_type']) ? unserialize($defaults['entity_type']) : array(),
    );

    return $form;
  }

  /**
   * Condition form submit handler.
   */
  public function condition_form_submit($values) {
    return array(
      'entity_type' => serialize($values['entity_type']),
    );
  }

  /**
   * Execute.
   */
  public function execute($entity_type, $view_mode) {
    if ($this->condition_used()) {
      foreach ($this->get_contexts() as $context) {
        $settings = $this->fetch_from_context($context, 'values');

        if (in_array(
              "$entity_type|$view_mode",
              array_filter(unserialize($settings['entity_type']))
            )) {
          $this->condition_met($context);
        }
      }
    }
  }
}
