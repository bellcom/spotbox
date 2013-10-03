<?php
/**
 * @file
 * spotbox.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function spotbox_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'spotbox';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'spotbox';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Felt: Indhold: Link til side */
  $handler->display->display_options['fields']['field_spotbox_link']['id'] = 'field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link']['table'] = 'field_data_field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link']['field'] = 'field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link']['label'] = 'URL';
  $handler->display->display_options['fields']['field_spotbox_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_spotbox_link']['type'] = 'link_plain';
  /* Felt: Indhold: Link til side */
  $handler->display->display_options['fields']['field_spotbox_link_1']['id'] = 'field_spotbox_link_1';
  $handler->display->display_options['fields']['field_spotbox_link_1']['table'] = 'field_data_field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link_1']['field'] = 'field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link_1']['label'] = 'Titel';
  $handler->display->display_options['fields']['field_spotbox_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_spotbox_link_1']['type'] = 'link_title_plain';
  /* Felt: Indhold: Spotbillede */
  $handler->display->display_options['fields']['field_spotbox_image']['id'] = 'field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['table'] = 'field_data_field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['field'] = 'field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['path'] = '[field_spotbox_link]';
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['alt'] = '[field_spotbox_link_1]';
  $handler->display->display_options['fields']['field_spotbox_image']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_spotbox_image']['element_class'] = 'billede';
  $handler->display->display_options['fields']['field_spotbox_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spotbox_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'titel';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Ekstra tekst */
  $handler->display->display_options['fields']['field_spotbox_text']['id'] = 'field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['table'] = 'field_data_field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['field'] = 'field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['text'] = '<span class="titel"><a href="[field_spotbox_link]">[title]</a></span>
<span class="resten"><a href="[field_spotbox_link]">[field_spotbox_text]</a></span>';
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['alt'] = '[field_spotbox_link_1]';
  $handler->display->display_options['fields']['field_spotbox_text']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_spotbox_text']['element_class'] = 'ekstratekst';
  $handler->display->display_options['fields']['field_spotbox_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_text']['element_default_classes'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'spotbox' => 'spotbox',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'spotbox' => 'spotbox',
  );
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: View-område */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'kontaktblok:block_1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_spotbox_node']['id'] = 'reverse_field_spotbox_node';
  $handler->display->display_options['relationships']['reverse_field_spotbox_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_spotbox_node']['field'] = 'reverse_field_spotbox_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Link til side */
  $handler->display->display_options['fields']['field_spotbox_link']['id'] = 'field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link']['table'] = 'field_data_field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link']['field'] = 'field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link']['label'] = 'URL';
  $handler->display->display_options['fields']['field_spotbox_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_spotbox_link']['type'] = 'link_plain';
  /* Felt: Indhold: Link til side */
  $handler->display->display_options['fields']['field_spotbox_link_1']['id'] = 'field_spotbox_link_1';
  $handler->display->display_options['fields']['field_spotbox_link_1']['table'] = 'field_data_field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link_1']['field'] = 'field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link_1']['relationship'] = 'field_spotbox_target_id';
  $handler->display->display_options['fields']['field_spotbox_link_1']['label'] = 'Titel';
  $handler->display->display_options['fields']['field_spotbox_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_spotbox_link_1']['type'] = 'link_title_plain';
  /* Felt: Indhold: Spotbillede */
  $handler->display->display_options['fields']['field_spotbox_image']['id'] = 'field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['table'] = 'field_data_field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['field'] = 'field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['path'] = '[field_spotbox_link]';
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['alt'] = '[field_spotbox_link_1]';
  $handler->display->display_options['fields']['field_spotbox_image']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_spotbox_image']['element_class'] = 'billede';
  $handler->display->display_options['fields']['field_spotbox_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spotbox_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'titel';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Ekstra tekst */
  $handler->display->display_options['fields']['field_spotbox_text']['id'] = 'field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['table'] = 'field_data_field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['field'] = 'field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['text'] = '<span class="titel"><a href="[field_spotbox_link]">[title]</a></span>
<span class="resten"><a href="[field_spotbox_link]">[field_spotbox_text]</a></span>';
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['path'] = '[field_spotbox_link]';
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['alt'] = '[field_spotbox_link_1]';
  $handler->display->display_options['fields']['field_spotbox_text']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_spotbox_text']['element_class'] = 'ekstratekst';
  $handler->display->display_options['fields']['field_spotbox_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_text']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_spotbox_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'page' => 'page',
  );
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:node.field_spotbox',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '0';
  $translatables['spotbox'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('URL'),
    t('Titel'),
    t('[field_spotbox_link_1]'),
    t('<span class="titel"><a href="[field_spotbox_link]">[title]</a></span>
<span class="resten"><a href="[field_spotbox_link]">[field_spotbox_text]</a></span>'),
    t('Block'),
    t('Content pane'),
    t('Indhold referencing Indhold from field_spotbox'),
    t('Alle'),
    t('View panes'),
  );
  $export['spotbox'] = $view;

  return $export;
}
