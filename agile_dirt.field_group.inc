<?php
/**
 * @file
 * agile_dirt.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function agile_dirt_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional|node|item|form';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional information',
    'weight' => '18',
    'children' => array(
      0 => 'group_screenshots',
      1 => 'group_legacy',
      2 => 'group_directories',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-additional field-group-htabs',
      ),
    ),
  );
  $export['group_additional|node|item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|item|default';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'item';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_display';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '14',
    'children' => array(
      0 => 'body',
      1 => 'field_platform',
      2 => 'field_developer',
      3 => 'field_cost',
      4 => 'field_tags',
      5 => 'field_webpage',
      6 => 'field_dependency',
      7 => 'field_categories',
      8 => 'field_license',
      9 => 'field_tool_status',
      10 => 'field_tadirah_goals_methods',
      11 => 'field_tadirah_research_objects',
      12 => 'field_funding_sources',
      13 => 'field_cost_bracket',
      14 => 'field_licensing',
      15 => 'field_tadirah_techniques',
      16 => 'changed_date',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-description field-group-htab',
      ),
    ),
  );
  $export['group_description|node|item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_directories|node|item|form';
  $field_group->group_name = 'group_directories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional';
  $field_group->data = array(
    'label' => 'Other directories',
    'weight' => '13',
    'children' => array(
      0 => 'field_tapor',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-directories field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_directories|node|item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_display|node|item|default';
  $field_group->group_name = 'group_display';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Display',
    'weight' => '2',
    'children' => array(
      0 => 'group_technical_tabs',
      1 => 'group_description',
      2 => 'group_screenshots',
      3 => 'group_comments',
      4 => 'group_derivative',
      5 => 'group_contributors',
      6 => 'group_other_directories',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-display field-group-htabs',
      ),
    ),
  );
  $export['group_display|node|item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_legacy|node|item|form';
  $field_group->group_name = 'group_legacy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional';
  $field_group->data = array(
    'label' => 'Legacy fields',
    'weight' => '12',
    'children' => array(
      0 => 'field_categories',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-legacy field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_legacy|node|item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_directories|node|item|default';
  $field_group->group_name = 'group_other_directories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'item';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_display';
  $field_group->data = array(
    'label' => 'Other directories',
    'weight' => '21',
    'children' => array(
      0 => 'field_tapor',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-other-directories field-group-htab',
        'id' => '',
      ),
    ),
  );
  $export['group_other_directories|node|item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_screenshots|node|item|default';
  $field_group->group_name = 'group_screenshots';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'item';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_display';
  $field_group->data = array(
    'label' => 'Screenshots',
    'weight' => '15',
    'children' => array(
      0 => 'field_screenshot',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-screenshots field-group-htab',
      ),
    ),
  );
  $export['group_screenshots|node|item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_screenshots|node|item|form';
  $field_group->group_name = 'group_screenshots';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional';
  $field_group->data = array(
    'label' => 'Screenshots',
    'weight' => '11',
    'children' => array(
      0 => 'field_screenshot',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-screenshots field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_screenshots|node|item|form'] = $field_group;

  return $export;
}
