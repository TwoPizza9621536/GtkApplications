# SPDX-FileCopyrightText: 2022 Samuel Wu
#
# SPDX-License-Identifier: CC0-1.0
project(GtkmmHelloWorld LANGUAGES CXX)

add_executable(${PROJECT_NAME} src/main.cpp src/helloworld.cpp)

find_package(PkgConfig)
pkg_check_modules(GTKMM_VARS REQUIRED IMPORTED_TARGET gtkmm-4.0)

target_link_libraries(${PROJECT_NAME} PRIVATE PkgConfig::GTKMM_VARS)
