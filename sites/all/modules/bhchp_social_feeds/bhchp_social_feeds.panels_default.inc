<?php
/**
 * @file
 * bhchp_social_feeds.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function bhchp_social_feeds_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'social_feed_blocks';
  $mini->category = '';
  $mini->admin_title = 'Social Feed Blocks';
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
  $display->title = 'social feed blocks';
  $display->uuid = '207ead3b-c47e-4dd2-837c-6cf26beb728c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b36c97dc-ee5b-4787-a845-f4d601b9315f';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-facebook_feed-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b36c97dc-ee5b-4787-a845-f4d601b9315f';
    $display->content['new-b36c97dc-ee5b-4787-a845-f4d601b9315f'] = $pane;
    $display->panels['center'][0] = 'new-b36c97dc-ee5b-4787-a845-f4d601b9315f';
    $pane = new stdClass();
    $pane->pid = 'new-cd255296-42de-4b3e-a8f1-4ef31396c123';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-bhchp_tweets-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cd255296-42de-4b3e-a8f1-4ef31396c123';
    $display->content['new-cd255296-42de-4b3e-a8f1-4ef31396c123'] = $pane;
    $display->panels['center'][1] = 'new-cd255296-42de-4b3e-a8f1-4ef31396c123';
    $pane = new stdClass();
    $pane->pid = 'new-3a9b36b4-5358-4a9f-bc00-23d54f00eab1';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-videos_gallery-block_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3a9b36b4-5358-4a9f-bc00-23d54f00eab1';
    $display->content['new-3a9b36b4-5358-4a9f-bc00-23d54f00eab1'] = $pane;
    $display->panels['center'][2] = 'new-3a9b36b4-5358-4a9f-bc00-23d54f00eab1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b36c97dc-ee5b-4787-a845-f4d601b9315f';
  $mini->display = $display;
  $export['social_feed_blocks'] = $mini;

  return $export;
}
