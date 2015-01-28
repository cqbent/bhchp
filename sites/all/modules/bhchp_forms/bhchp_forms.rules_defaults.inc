<?php
/**
 * @file
 * bhchp_forms.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function bhchp_forms_default_rules_configuration() {
  $items = array();
  $items['rules_process_entityform_submissiion'] = entity_import('rules_config', '{ "rules_process_entityform_submissiion" : {
      "LABEL" : "Process Entityform Submissiion",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "DO" : [
        { "mail" : {
            "to" : "cqbent@gmail.com",
            "subject" : "A [entityform:type] has been submitted",
            "message" : "The user has submitted a [entityform:type] form. Click below for details:\\r\\n\\r\\n[entityform:url]",
            "from" : "info@bhchp.org",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
