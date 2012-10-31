; Open Government Platform
; ------------------------

; Core version
; ------------
core = 7.x

; API version
; ------------
api = 2


; Contrib
; -------
projects[advanced_help][subdir] = "contrib"
projects[blockify][subdir] = "contrib"
projects[boxes][subdir] = "contrib"
projects[colorbox][subdir] = "contrib"
projects[conditional_styles][subdir] = "contrib"
projects[diff][subdir] = "contrib"
projects[entity][subdir] = "contrib"
projects[faq][subdir] = "contrib"
projects[flood_control][subdir] = "contrib"
projects[libraries][subdir] = "contrib"
projects[password_policy][subdir] = "contrib"
projects[pathauto_persist][subdir] = "contrib"
projects[site_map][subdir] = "contrib"
projects[token][subdir] = "contrib"
projects[token_filter][subdir] = "contrib"
projects[pathauto][subdir] = "contrib"
projects[fast_404][subdir] = "contrib"
projects[redirect][subdir] = "contrib"
projects[autologout][subdir] = "contrib"
projects[fusion_accelerator][subdir] = "contrib"
projects[webform][subdir] = "contrib"
projects[addthis][subdir] = "contrib"
projects[entityreference][subdir] = "contrib"
projects[field_collection][subdir] = "contrib"
projects[link][subdir] = "contrib"
projects[calendar][subdir] = "contrib"
projects[date][subdir] = "contrib"
projects[captcha][subdir] = "contrib"
projects[recaptcha][subdir] = "contrib"
projects[ctools][subdir] = "contrib"
projects[context][subdir] = "contrib"
projects[imce][subdir] = "contrib"
projects[imce_mkdir][subdir] = "contrib"
projects[imce_wysiwyg][subdir] = "contrib"
projects[jquery_update][subdir] = "contrib"
projects[superfish][subdir] = "contrib"
projects[wysiwyg][subdir] = "contrib"
projects[extlink][subdir] = "contrib"
projects[node_export][subdir] = "contrib"
projects[og][subdir] = "contrib"
projects[og][patch][] ="http://drupal.org/files/og-1109676-24_add-filter-widget.patch"
projects[og_menu][subdir] = "contrib"
projects[panels][subdir] = "contrib"
projects[rules][subdir] = "contrib"
projects[services][subdir] = "contrib"
projects[uuid][subdir] = "contrib"
projects[views_bulk_operations][subdir] = "contrib"
projects[views_data_export][subdir] = "contrib"
projects[views_slideshow][subdir] = "contrib"
projects[views][subdir] = "contrib"
projects[workbench][subdir] = "contrib"
projects[workbench_moderation][subdir] = "contrib"
projects[xmlsitemap][subdir] = "contrib"
projects[features][subdir] = "contrib"

; Devel
; -----
projects[devel][subdir] = devel
projects[diff][subdir] = devel
projects[variable][subdir] = devel
projects[strongarm][subdir] = "devel"
projects[profiler_builder][subdir] = "devel"


; Libraries
; ---------
libraries[] = colorbox

; @todo Debug
; libraries[] = geoPHP

libraries[] = highcharts

; @todo Debug
; libraries[] = jquery.cycle

libraries[] = json2

libraries[] = superfish

; @todo Debug
; libraries[] = tinymce