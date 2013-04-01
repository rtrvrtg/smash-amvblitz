<?php
/**
 * @file
 * amv_blitz_content.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function amv_blitz_content_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:amv-blitz-rounds
  $menu_links['main-menu:amv-blitz-rounds'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'amv-blitz-rounds',
    'router_path' => 'amv-blitz-rounds',
    'link_title' => 'Rounds',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:node/3
  $menu_links['main-menu:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Rules',
    'options' => array(
      'attributes' => array(
        'title' => 'Rules & Submission Guidelines',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Rounds');
  t('Rules');


  return $menu_links;
}
