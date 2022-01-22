project(GtkmmHelloWorld LANGUAGES CXX)

add_executable(${PROJECT_NAME} src/main.cpp src/helloworld.cpp)

find_package(PkgConfig)
pkg_check_modules(GTKMM_VARS REQUIRED IMPORTED_TARGET gtkmm-4.0)

target_link_libraries(${PROJECT_NAME} PRIVATE PkgConfig::GTKMM_VARS)
