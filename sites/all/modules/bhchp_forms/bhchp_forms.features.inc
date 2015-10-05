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
  $items['employment_application'] = entity_import('entityform_type', '{
    "type" : "employment_application",
    "label" : "Employment Application",
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
      "roles" : { "1" : "1", "2" : 0, "3" : 0, "4" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003ETo ensure proper consideration, please fill in the information below as completely and accurately as possible. (Please fill out completely, even if you have submitted a resume.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Cstrong\\u003ECORI Information CORI \\u003C\\/strong\\u003E(Criminal Offender Record Information)\\u003Cbr \\/\\u003E\\r\\nPlease be advised that in order to comply with Massachusetts Executive Office of Health and Human Services requirements, Boston Health Care for the Homeless Program conducts criminal record checks for all new employees. This check must be completed prior to beginning employment. A CORI form and CORI policy will be provided if you are offered employment. Thank you.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Cstrong\\u003EIMMUNIZATION RECORDS \\u003C\\/strong\\u003E\\u003Cbr \\/\\u003E\\r\\nAll new hires are required to provide immunization or immunity documentation of measles\\/mumps\\/rubella(MMR) and chicken pox (varicella) prior to your start date. Tuberculosis (TB) testing can be provided during the first week of employment and bi-annual (every 6 months) testing is required. Hepatitis B vaccinations will be offered to new employess who are not already vaccinated.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
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
      "roles" : { "1" : "1", "2" : 0, "3" : 0, "4" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
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
