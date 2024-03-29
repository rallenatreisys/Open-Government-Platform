<?php
/**
 * @file
 * data_gov_communities_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function data_gov_communities_configuration_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function data_gov_communities_configuration_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function data_gov_communities_configuration_node_info() {
  $items = array(
    'community' => array(
      'name' => t('Community'),
      'base' => 'node_content',
      'description' => t('A community focused around common data.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_og_membership_type().
 */
function data_gov_communities_configuration_default_og_membership_type() {
  $items = array();
  $items['contributor'] = entity_import('og_membership_type', '{ "name" : "contributor", "description" : "Contributor" }');
  return $items;
}
