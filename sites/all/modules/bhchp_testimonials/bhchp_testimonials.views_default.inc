<?php
/**
 * @file
 * bhchp_testimonials.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bhchp_testimonials_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'testimonial_picked';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'testimonial picked';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Testimonial';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_page_testimonial_entity_node']['id'] = 'reverse_field_page_testimonial_entity_node';
  $handler->display->display_options['relationships']['reverse_field_page_testimonial_entity_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_page_testimonial_entity_node']['field'] = 'reverse_field_page_testimonial_entity_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_testimonial_name']['id'] = 'field_testimonial_name';
  $handler->display->display_options['fields']['field_testimonial_name']['table'] = 'field_data_field_testimonial_name';
  $handler->display->display_options['fields']['field_testimonial_name']['field'] = 'field_testimonial_name';
  $handler->display->display_options['fields']['field_testimonial_name']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_name']['element_label_colon'] = FALSE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_testimonial_position']['id'] = 'field_testimonial_position';
  $handler->display->display_options['fields']['field_testimonial_position']['table'] = 'field_data_field_testimonial_position';
  $handler->display->display_options['fields']['field_testimonial_position']['field'] = 'field_testimonial_position';
  $handler->display->display_options['fields']['field_testimonial_position']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_position']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_page_testimonial_entity_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'testimonial' => 'testimonial',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['testimonial_picked'] = $view;

  $view = new view();
  $view->name = 'testimonial_random';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'testimonial random';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Testimonial';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_page_testimonial_entity_node']['id'] = 'reverse_field_page_testimonial_entity_node';
  $handler->display->display_options['relationships']['reverse_field_page_testimonial_entity_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_page_testimonial_entity_node']['field'] = 'reverse_field_page_testimonial_entity_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_testimonial_name']['id'] = 'field_testimonial_name';
  $handler->display->display_options['fields']['field_testimonial_name']['table'] = 'field_data_field_testimonial_name';
  $handler->display->display_options['fields']['field_testimonial_name']['field'] = 'field_testimonial_name';
  $handler->display->display_options['fields']['field_testimonial_name']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_name']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_testimonial_name']['element_label_colon'] = FALSE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_testimonial_position']['id'] = 'field_testimonial_position';
  $handler->display->display_options['fields']['field_testimonial_position']['table'] = 'field_data_field_testimonial_position';
  $handler->display->display_options['fields']['field_testimonial_position']['field'] = 'field_testimonial_position';
  $handler->display->display_options['fields']['field_testimonial_position']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_position']['element_label_colon'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_page_testimonial_entity_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'testimonial' => 'testimonial',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['testimonial_random'] = $view;

  return $export;
}
