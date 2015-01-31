<?php
/**
 * @file
 * bhchp_ui_general.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function bhchp_ui_general_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'mobile_menu';
  $mini->category = '';
  $mini->admin_title = 'Mobile Menu';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Mobile Menu';
  $display->uuid = '5b1f931c-8fb7-4cfd-a9cb-d305b0a871b4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1103dfa1-1ca8-44a7-92a1-da9ecc2cc998';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<i class="fa fa-times"></i>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'close-link',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1103dfa1-1ca8-44a7-92a1-da9ecc2cc998';
    $display->content['new-1103dfa1-1ca8-44a7-92a1-da9ecc2cc998'] = $pane;
    $display->panels['center'][0] = 'new-1103dfa1-1ca8-44a7-92a1-da9ecc2cc998';
    $pane = new stdClass();
    $pane->pid = 'new-63553217-59b7-4b2d-ae84-dd19b68f8677';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '63553217-59b7-4b2d-ae84-dd19b68f8677';
    $display->content['new-63553217-59b7-4b2d-ae84-dd19b68f8677'] = $pane;
    $display->panels['center'][1] = 'new-63553217-59b7-4b2d-ae84-dd19b68f8677';
    $pane = new stdClass();
    $pane->pid = 'new-06faa5b8-d249-4f30-9a9e-5e768210b2de';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '06faa5b8-d249-4f30-9a9e-5e768210b2de';
    $display->content['new-06faa5b8-d249-4f30-9a9e-5e768210b2de'] = $pane;
    $display->panels['center'][2] = 'new-06faa5b8-d249-4f30-9a9e-5e768210b2de';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['mobile_menu'] = $mini;

  return $export;
}
