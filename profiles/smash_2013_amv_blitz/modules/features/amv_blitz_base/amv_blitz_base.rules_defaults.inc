<?php
/**
 * @file
 * amv_blitz_base.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function amv_blitz_base_default_rules_configuration() {
  $items = array();
  $items['rules_create_new_user'] = entity_import('rules_config', '{ "rules_create_new_user" : {
      "LABEL" : "Create new user",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "registration" ],
      "ON" : [ "registration_insert" ],
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "1" : "1" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "registration" ], "field" : "field_name" } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "user",
              "param_field_name" : [ "registration:field-name" ],
              "param_name" : [ "registration:mail" ],
              "param_mail" : [ "registration:mail" ]
            },
            "PROVIDE" : { "entity_created" : { "new_user" : "New User" } }
          }
        },
        { "user_unblock" : { "account" : [ "new-user" ] } },
        { "drupal_message" : {
            "message" : "We\\u0027ve just sent you some details to help you set up a user account for this site. If you get invited to upcoming Blitz rounds, you\\u0027ll need this account to log in and submit your entry.",
            "type" : "warning"
          }
        }
      ]
    }
  }');
  $items['rules_prevent_access'] = entity_import('rules_config', '{ "rules_prevent_access" : {
      "LABEL" : "Prevent access",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "rules_special_redirects" ],
      "ON" : [ "node_view" ],
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "node" ], "type" : "node" } },
        { "data_is" : { "data" : [ "node:type" ], "value" : "blitz_round" } },
        { "NOT OR" : [
            { "user_has_role" : {
                "account" : [ "site:current-user" ],
                "roles" : { "value" : { "3" : "3" } }
              }
            },
            { "AND" : [
                { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_users_in_round" } },
                { "OR" : [
                    { "data_is_empty" : { "data" : [ "node:field-users-in-round" ] } },
                    { "list_contains" : {
                        "list" : [ "node:field-users-in-round" ],
                        "item" : [ "site:current-user" ]
                      }
                    }
                  ]
                }
              ]
            }
          ]
        },
        { "data_is" : {
            "data" : [ "view-mode" ],
            "op" : "IN",
            "value" : { "value" : {
                "full" : "full",
                "rss" : "rss",
                "token" : "token",
                "revision" : "revision"
              }
            }
          }
        }
      ],
      "DO" : [ { "rules_special_redirects_access_denied" : [] } ]
    }
  }');
  return $items;
}
