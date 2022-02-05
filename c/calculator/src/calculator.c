/*
 * SPDX-FileCopyrightText: 2022 Samuel Wu
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */

#include <gtk/gtk.h>

static void activate(GtkApplication* app, gpointer data)
{
    GtkWidget* window;
    GtkWidget* grid;

    window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "Calculator");

    grid = gtk_grid_new();

    gtk_window_set_child(GTK_WINDOW(window), grid);
    button = gtk_button_new_with_label("z");
    gtk_widget_show(window);
}

int main(int argc, char** argv)
{
    GtkApplication* app;
    int status;

    app = gtk_application_new("io.github.twopizza9621536.calculator", G_APPLICATION_FLAGS_NONE);
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
    status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);

    return status;
}
