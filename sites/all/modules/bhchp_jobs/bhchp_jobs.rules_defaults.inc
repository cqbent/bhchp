<?php
/**
 * @file
 * bhchp_jobs.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function bhchp_jobs_default_rules_configuration() {
  $items = array();
  $items['rules_unpublish_job_posting'] = entity_import('rules_config', '{ "rules_unpublish_job_posting" : {
      "LABEL" : "Unpublish Job Posting",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_scheduler" ],
      "ON" : { "node_update--job_posting" : { "bundle" : "job_posting" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "job_posting" : "job_posting" } }
          }
        }
      ],
      "DO" : [
        { "schedule" : {
            "component" : "rules_unpublish_node",
            "date" : [ "node:field-post-end-date" ],
            "identifier" : "Unpublish content for node [node:nid]",
            "param_node" : [ "node" ]
          }
        }
      ]
    }
  }');
  return $items;
}
