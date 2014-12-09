<?php
/**
 * @file
 * agile_dirt.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function agile_dirt_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-item-body'
  $field_instances['node-item-body'] = array(
    'bundle' => 'item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-item-field_categories'
  $field_instances['node-item-field_categories'] = array(
    'bundle' => 'item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The official category that the tool/resource belongs to. To select more than one category, hold down the <em>Ctrl</em> key.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_categories',
    'label' => 'Categories',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-item-field_cost'
  $field_instances['node-item-field_cost'] = array(
    'bundle' => 'item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cost',
    'label' => 'Cost',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-item-field_cost_bracket'
  $field_instances['node-item-field_cost_bracket'] = array(
    'bundle' => 'item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cost_bracket',
    'label' => 'Cost bracket',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-item-field_dependency'
  $field_instances['node-item-field_dependency'] = array(
    'bundle' => 'item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Is this a browser plugin, a Wordpress plugin, an add-on to another tool, or software that lets you upload/browse cloud-hosted content (like on Flickr)? Type a comma-separated list of the tools/resources/services that it depends on. (e.g. Firefox, Chrome)',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dependency',
    'label' => 'Depends on',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'noderefcreate',
      'settings' => array(
        'autocomplete_match' => 'starts_with',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'noderefcreate_autocomplete',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-item-field_developer'
  $field_instances['node-item-field_developer'] = array(
    'bundle' => 'item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A comma-separated list of the developer(s) behind a tool. For instance, if a tool is a joint project of CHNM and MITH, you can type: CHNM, MITH',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_developer',
    'label' => 'Developer',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-item-field_funding_sources'
  $field_instances['node-item-field_funding_sources'] = array(
    'bundle' => 'item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Comma-separated list of foundations, organizations, or other sources of funding for the tool (e.g. Andrew W. Mellon Foundation, National Endowment for the Humanities).',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_funding_sources',
    'label' => 'Funding source(s)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-item-field_good_for_beginners'
  $field_instances['node-item-field_good_for_beginners'] = array(
    'bundle' => 'item',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Is this a good tool for people new to digital research tools?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_good_for_beginners',
    'label' => 'Good for beginners',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-item-field_license'
  $field_instances['node-item-field_license'] = array(
    'bundle' => 'item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Is the source code for this tool available under an open source license? Toggle down to select a specific license, if possible.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_license',
    'label' => 'Code license',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'cascading_selection' => 0,
        'filter_view' => '',
        'leaves_only' => 0,
        'max_depth' => '',
        'parent_term_id' => '',
        'select_parents' => 1,
        'start_minimized' => 1,
        'token_display' => '',
        'track_list' => 0,
      ),
      'type' => 'options_select',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-item-field_licensing'
  $field_instances['node-item-field_licensing'] = array(
    'bundle' => 'item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_licensing',
    'label' => 'Licensing options',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-item-field_platform'
  $field_instances['node-item-field_platform'] = array(
    'bundle' => 'item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_platform',
    'label' => 'Platform',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-item-field_reviewed'
  $field_instances['node-item-field_reviewed'] = array(
    'bundle' => 'item',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'For DiRT editors. Check this box when you\'re done reviewing the metadata on this tool.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_reviewed',
    'label' => 'Reviewed',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-item-field_screenshot'
  $field_instances['node-item-field_screenshot'] = array(
    'bundle' => 'item',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'lightbox2',
        'settings' => array(),
        'type' => 'lightbox2__lightbox__medium__original',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_screenshot',
    'label' => 'Screenshot',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'screenshots',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-item-field_tadirah_goals_methods'
  $field_instances['node-item-field_tadirah_goals_methods'] = array(
    'bundle' => 'item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tadirah_goals_methods',
    'label' => 'TaDiRAH goals & methods',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'cascading_selection' => 0,
        'filter_view' => '',
        'leaves_only' => 0,
        'max_depth' => '',
        'parent_term_id' => '',
        'select_parents' => 1,
        'start_minimized' => 0,
        'token_display' => '',
        'track_list' => 0,
      ),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-item-field_tadirah_research_objects'
  $field_instances['node-item-field_tadirah_research_objects'] = array(
    'bundle' => 'item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What objects does this tool work on? Autocomplete, or add your own term. Examples: Artifacts, BibliographicListings, Computers, Curricula, DigitalHumanities, Data, File, Images, Images(3D), Infrastructure, Interaction, Language, Link, Literature, Manuscript, Map, Metadata, Methods, Multimedia, Multimodal, NamedEntities, Persons, Projects, Research, ResearchProcess, ResearchResults, SheetMusic, Software, Sound, Standards, Text, TextBearingObjects, Tools, Video, Visualization, VREs.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tadirah_research_objects',
    'label' => 'TaDiRAH research objects',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-item-field_tadirah_techniques'
  $field_instances['node-item-field_tadirah_techniques'] = array(
    'bundle' => 'item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A comma-separated list of <em>techniques</em> associated with the tool. Techniques describe <em>how</em> the tool accomplishes the TaDiRAH goals/methods you have indicated. (e.g. the "Capture" goal with the "Gathering" method could use the technique "Web Crawling".)',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tadirah_techniques',
    'label' => 'TaDiRAH techniques',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-item-field_tags'
  $field_instances['node-item-field_tags'] = array(
    'bundle' => 'item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A comma-separated list of descriptive tags to help others find this tool.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-item-field_tapor'
  $field_instances['node-item-field_tapor'] = array(
    'bundle' => 'item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The URL for this tool\'s profile on TAPoR (Text Analysis Portal for Research). <strong>Should look like: http://www.tapor.ca/?id=[some-number-here]</strong>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tapor',
    'label' => 'TAPoR',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => '[node:title] on TAPoR',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-item-field_tool_status'
  $field_instances['node-item-field_tool_status'] = array(
    'bundle' => 'item',
    'default_value' => array(
      0 => array(
        'tid' => 1176,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tool_status',
    'label' => 'Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-item-field_webpage'
  $field_instances['node-item-field_webpage'] = array(
    'bundle' => 'item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A link to the webpage for this tool, resource, service or content.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_url',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_webpage',
    'label' => 'Webpage',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '[node:title]',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'taxonomy_term-categories-field_task'
  $field_instances['taxonomy_term-categories-field_task'] = array(
    'bundle' => 'categories',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What is the task associated with this category (i.e. what is it that people would do with the tools in this category)?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_task',
    'label' => 'Task',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-tags-field_task'
  $field_instances['taxonomy_term-tags-field_task'] = array(
    'bundle' => 'tags',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_task',
    'label' => 'Task',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A comma-separated list of <em>techniques</em> associated with the tool. Techniques describe <em>how</em> the tool accomplishes the TaDiRAH goals/methods you have indicated. (e.g. the "Capture" goal with the "Gathering" method could use the technique "Web Crawling".)');
  t('A comma-separated list of descriptive tags to help others find this tool.');
  t('A comma-separated list of the developer(s) behind a tool. For instance, if a tool is a joint project of CHNM and MITH, you can type: CHNM, MITH');
  t('A link to the webpage for this tool, resource, service or content.');
  t('Categories');
  t('Code license');
  t('Comma-separated list of foundations, organizations, or other sources of funding for the tool (e.g. Andrew W. Mellon Foundation, National Endowment for the Humanities).');
  t('Cost');
  t('Cost bracket');
  t('Depends on');
  t('Description');
  t('Developer');
  t('For DiRT editors. Check this box when you\'re done reviewing the metadata on this tool.');
  t('Funding source(s)');
  t('Good for beginners');
  t('Is the source code for this tool available under an open source license? Toggle down to select a specific license, if possible.');
  t('Is this a browser plugin, a Wordpress plugin, an add-on to another tool, or software that lets you upload/browse cloud-hosted content (like on Flickr)? Type a comma-separated list of the tools/resources/services that it depends on. (e.g. Firefox, Chrome)');
  t('Is this a good tool for people new to digital research tools?');
  t('Licensing options');
  t('Platform');
  t('Reviewed');
  t('Screenshot');
  t('Status');
  t('TAPoR');
  t('TaDiRAH goals & methods');
  t('TaDiRAH research objects');
  t('TaDiRAH techniques');
  t('Tags');
  t('Task');
  t('The URL for this tool\'s profile on TAPoR (Text Analysis Portal for Research). <strong>Should look like: http://www.tapor.ca/?id=[some-number-here]</strong>');
  t('The official category that the tool/resource belongs to. To select more than one category, hold down the <em>Ctrl</em> key.');
  t('Webpage');
  t('What is the task associated with this category (i.e. what is it that people would do with the tools in this category)?');
  t('What objects does this tool work on? Autocomplete, or add your own term. Examples: Artifacts, BibliographicListings, Computers, Curricula, DigitalHumanities, Data, File, Images, Images(3D), Infrastructure, Interaction, Language, Link, Literature, Manuscript, Map, Metadata, Methods, Multimedia, Multimodal, NamedEntities, Persons, Projects, Research, ResearchProcess, ResearchResults, SheetMusic, Software, Sound, Standards, Text, TextBearingObjects, Tools, Video, Visualization, VREs.');

  return $field_instances;
}
