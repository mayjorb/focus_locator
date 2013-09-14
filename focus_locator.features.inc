<?php
/**
 * @file
 * focus_locator.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function focus_locator_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_styles") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function focus_locator_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function focus_locator_node_info() {
  $items = array(
    'focus_locator_location' => array(
      'name' => t('Location'),
      'base' => 'node_content',
      'description' => t('Use <em>Location</em> for adding Focus shop locations.'),
      'has_title' => '1',
      'title_label' => t('Business Name'),
      'help' => '',
    ),
  );
  return $items;
}
