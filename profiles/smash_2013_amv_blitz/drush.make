; SMASH! 2013 AMV Blitz make file
core = "7.x"
api = "2"
; comment this out in to use on drupal.org
projects[drupal][version] = "7.x"

; Modules
projects[ctools][version] = "1.2"
projects[ctools][subdir] = "contrib"

projects[profiler_builder][version] = "1.0-rc3"
projects[profiler_builder][subdir] = "contrib"

projects[ds][version] = "2.2"
projects[ds][subdir] = "contrib"

projects[features][version] = "2.0-beta1"
projects[features][subdir] = "contrib"

projects[uuid_features][version] = "1.0-alpha3"
projects[uuid_features][subdir] = "contrib"

projects[entityreference][version] = "1.0"
projects[entityreference][subdir] = "contrib"

projects[field_permissions][version] = "1.0-beta2"
projects[field_permissions][subdir] = "contrib"

projects[inline_entity_form][version] = "1.1"
projects[inline_entity_form][subdir] = "contrib"

projects[link][version] = "1.1"
projects[link][subdir] = "contrib"

projects[entity][version] = "1.0"
projects[entity][subdir] = "contrib"

projects[libraries][version] = "2.1"
projects[libraries][subdir] = "contrib"

projects[logintoboggan][version] = "1.3"
projects[logintoboggan][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

projects[rabbit_hole][version] = "2.21"
projects[rabbit_hole][subdir] = "contrib"

projects[stringoverrides][version] = "1.8"
projects[stringoverrides][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[token][version] = "1.5"
projects[token][subdir] = "contrib"

projects[registration][version] = "1.1"
projects[registration][subdir] = "contrib"

projects[rules][version] = "2.2"
projects[rules][subdir] = "contrib"

projects[uuid][version] = "1.x-dev"
projects[uuid][subdir] = "contrib"

projects[views][version] = "3.5"
projects[views][subdir] = "contrib"

projects[rules_special_redirects][version] = "1.x-dev"
projects[rules_special_redirects][subdir] = "custom"
projects[rules_special_redirects][download][url] = "http://git.drupal.org/sandbox/geoffreyr/1945104.git"

; Themes
; zen
projects[zen][type] = "theme"
projects[zen][version] = "5.1"
projects[zen][subdir] = "contrib"

; Libraries
libraries[profiler][directory_name] = "profiler"
libraries[profiler][type] = "library"
libraries[profiler][destination] = "libraries"
libraries[profiler][download][type] = "get"
libraries[profiler][download][url] = "http://ftp.drupal.org/files/projects/profiler-7.x-2.x-dev.tar.gz"

