<?php
/**
 * @file
 * dataset_list_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dataset_list_views_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'datasets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dataset List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'path' => 'path',
    'body' => 'body',
    'field_dataset_title' => 'field_dataset_title',
    'field_agency' => 'field_agency',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dataset_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agency' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['path']['absolute'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Dataset Title */
  $handler->display->display_options['fields']['field_dataset_title']['id'] = 'field_dataset_title';
  $handler->display->display_options['fields']['field_dataset_title']['table'] = 'field_data_field_dataset_title';
  $handler->display->display_options['fields']['field_dataset_title']['field'] = 'field_dataset_title';
  $handler->display->display_options['fields']['field_dataset_title']['label'] = 'Name';
  $handler->display->display_options['fields']['field_dataset_title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_dataset_title']['alter']['text'] = '<a href=[path] class="dataset_list_title">[field_dataset_title] </a>
<div class="dataset_list_description">
[body] 
</div>';
  $handler->display->display_options['fields']['field_dataset_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dataset_title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_dataset_title']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['field_dataset_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dataset_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dataset_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dataset_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dataset_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dataset_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dataset_title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_dataset_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dataset_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dataset_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dataset_title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_dataset_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dataset_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dataset_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dataset_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_dataset_title']['field_api_classes'] = 0;
  /* Field: Content: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_agency']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_agency']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_agency']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_agency']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_agency']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_agency']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_agency']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_agency']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_agency']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_agency']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_agency']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_agency']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_agency']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_agency']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_agency']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_agency']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_agency']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_agency']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['dataset_download']['id'] = 'dataset_download';
  $handler->display->display_options['fields']['dataset_download']['table'] = 'views';
  $handler->display->display_options['fields']['dataset_download']['field'] = 'nothing';
  $handler->display->display_options['fields']['dataset_download']['label'] = 'Downloads';
  $handler->display->display_options['fields']['dataset_download']['alter']['text'] = 'Placeholder';
  $handler->display->display_options['fields']['dataset_download']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['dataset_download']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['dataset_download']['alter']['external'] = 0;
  $handler->display->display_options['fields']['dataset_download']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['dataset_download']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['dataset_download']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['dataset_download']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['dataset_download']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['dataset_download']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['dataset_download']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['dataset_download']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['dataset_download']['alter']['html'] = 0;
  $handler->display->display_options['fields']['dataset_download']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['dataset_download']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['dataset_download']['hide_empty'] = 0;
  $handler->display->display_options['fields']['dataset_download']['empty_zero'] = 0;
  $handler->display->display_options['fields']['dataset_download']['hide_alter_empty'] = 0;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'data' => 'data',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'datasets';
  $export['datasets'] = $view;

  return $export;
}
