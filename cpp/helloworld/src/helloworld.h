/*
 * SPDX-FileCopyrightText: 2022 Samuel Wu
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 *
 * From https://www.gtk.org/docs/language-bindings/cpp/
 */

#pragma once
#ifndef GTKMM_EXAMPLE_HELLOWORLD_H
#define GTKMM_EXAMPLE_HELLOWORLD_H

#include <gtkmm/button.h>
#include <gtkmm/window.h>

class HelloWorld : public Gtk::Window
{
public:
    HelloWorld();
    ~HelloWorld() override;

protected:
    // Signal handlers:
    void on_button_clicked();

    // Member widgets:
    Gtk::Button m_button;
};

#endif // GTKMM_EXAMPLE_HELLOWORLD_H
