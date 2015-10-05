<?php
/**
 * @file
 * bhchp_ui_general.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function bhchp_ui_general_default_rules_configuration() {
  $items = array();
  $items['rules_unpublish_node'] = entity_import('rules_config', '{ "rules_unpublish_node" : {
      "LABEL" : "Unpublish Node",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "Node", "type" : "node" } },
      "ACTION SET" : [ { "node_unpublish" : { "node" : [ "node" ] } } ]
    }
  }');
  return $items;
}
