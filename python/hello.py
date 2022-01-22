# SPDX-FileCopyrightText: 2022 Samuel Wu
#
# SPDX-License-Identifier: LGPL-2.1-or-later
from gi.repository import Gtk
import gi

gi.require_version("Gtk", "3.0")


class MyWindow(Gtk.Window):
    def __init__(self):
        Gtk.Window.__init__(self, title="Hello World")

        self.button = Gtk.Button(label="Click Here")
        self.button.connect("clicked", self.on_button_clicked)
        self.add(self.button)

    def on_button_clicked(self, widget):
        print("Hello World")


win = MyWindow()
win.connect("destroy", Gtk.main_quit)
win.show_all()
Gtk.main()
