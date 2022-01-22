/*
 * SPDX-FileCopyrightText: 2022 Samuel Wu
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 *
 * From https://www.gtk.org/docs/language-bindings/cpp/
 */

#include <iostream>
#include "helloworld.h"

 // Create a new button with label "Hello World".
HelloWorld::HelloWorld() : m_button("Hello World")
{
    // Set the margin around the button.
    m_button.set_margin(10);

    // When the button recives the "clicked" signal, it will call the
    // on_button_clicked() method defined below.
    m_button.signal_clicked()
        .connect(sigc::mem_fun(*this, &HelloWorld::on_button_clicked));

    // This packs the button into the Window (a container).
    set_child(m_button);
}

HelloWorld::~HelloWorld()
{
}

void HelloWorld::on_button_clicked()
{
    std::cout << "Hello World\n";
}
