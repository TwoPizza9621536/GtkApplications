/*
 * SPDX-FileCopyrightText: 2022 Samuel Wu
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 *
 * From https://www.gtk.org/docs/language-bindings/cpp/
 */

#include <gtkmm/application.h>
#include "helloworld.h"

int main(int argc, char* argv[])
{
    auto app = Gtk::Application::create("org.gtkmm.example");

    // Shows the window and returns when it is closed.
    return app->make_window_and_run<HelloWorld>(argc, argv);
}
