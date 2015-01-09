<?php
/**
 * @file
 * bhchp_forms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bhchp_forms_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function bhchp_forms_default_entityform_type() {
  $items = array();
  $items['volunteer_internship_form'] = entity_import('entityform_type', '{
    "type" : "volunteer_internship_form",
    "label" : "Volunteer\\/Internship Form",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "full_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : 0, "3" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003E\\u003Cspan style=\\u0022color: rgb(0, 0, 0); font-family: Verdana; font-size: 12px; line-height: normal;\\u0022\\u003E*In addition to completing this application form, you must also submit\\u0026nbsp;\\u003C\\/span\\u003E\\u003Cstrong style=\\u0022color: rgb(0, 0, 0); font-family: Verdana; font-size: 12px; line-height: normal;\\u0022\\u003Etwo letters of reference\\u003C\\/strong\\u003E\\u003Cspan style=\\u0022color: rgb(0, 0, 0); font-family: Verdana; font-size: 12px; line-height: normal;\\u0022\\u003E\\u0026nbsp;from people who know you well (other than family). Emailed references will suffice. Email references may be sent to\\u003C\\/span\\u003E\\u003Ca href=\\u0022https:\\/\\/mail.google.com\\/mail\\/?view=cm\\u0026amp;fs=1\\u0026amp;tf=1\\u0026amp;to=volunteer@bhchp.org\\u0022 style=\\u0022font-family: Verdana; font-size: 12px; line-height: normal;\\u0022 target=\\u0022_blank\\u0022\\u003Evolunteer@bhchp.org\\u003C\\/a\\u003E\\u003Cspan style=\\u0022color: rgb(0, 0, 0); font-family: Verdana; font-size: 12px; line-height: normal;\\u0022\\u003E.\\u003C\\/span\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp style=\\u0022color: rgb(0, 0, 0); font-family: Verdana; font-size: 12px; line-height: normal;\\u0022\\u003E**Further, volunteers \\u0026amp; interns will also be required to complete the following: Orientation, CORI check, immunization records, any necessary training.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp style=\\u0022color: rgb(0, 0, 0); font-family: Verdana; font-size: 12px; line-height: normal;\\u0022\\u003E***Please note:\\u0026nbsp; Our internship opportunities are customized based on the applicant\\u2019s interest, BHCHP\\u2019s needs, and open positions.\\u0026nbsp; We will do our best to create an internship that is varied and meets your needs, but cannot always guarantee a position.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp style=\\u0022color: rgb(0, 0, 0); font-family: Verdana; font-size: 12px; line-height: normal;\\u0022\\u003EIf you cannot complete this application on line, please feel free to fax to (857) 654-1096 or mail to:\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp style=\\u0022color: rgb(0, 0, 0); font-family: Verdana; font-size: 12px; line-height: normal;\\u0022\\u003EVolunteer Programs\\u003Cbr style=\\u0022clear: left; margin: -5px; padding: 0px;\\u0022 \\/\\u003E\\r\\nBoston Health Care for the Homeless Program\\u003Cbr style=\\u0022clear: left; margin: -5px; padding: 0px;\\u0022 \\/\\u003E\\r\\n780 Albany Street\\u003Cbr style=\\u0022clear: left; margin: -5px; padding: 0px;\\u0022 \\/\\u003E\\r\\nBoston, MA 02118\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "enable_block" : 0
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/volunteer-internship-form",
        "alias" : "volunteer-internship\\/form",
        "language" : "und"
      }
    }
  }');
  return $items;
}
