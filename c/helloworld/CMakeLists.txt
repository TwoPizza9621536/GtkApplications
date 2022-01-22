project(GtkHelloWorld LANGUAGES C)

add_executable(${PROJECT_NAME} src/helloworld.c)

find_package(PkgConfig)
pkg_check_modules(GTK_VARS REQUIRED IMPORTED_TARGET gtk4)

target_link_libraries(${PROJECT_NAME} PRIVATE PkgConfig::GTK_VARS)
