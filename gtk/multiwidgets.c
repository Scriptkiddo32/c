#include <gtk/gtk.h>

static void
print_1 (GtkWidget *widget,
             gpointer   data)
{
  g_print ("1\n");
}


static void
print_2 (GtkWidget *widget,
             gpointer   data)
{
  g_print ("2\n");
}


static void
print_3 (GtkWidget *widget,
             gpointer   data)
{
  g_print ("3\n");
}


static void
print_4 (GtkWidget *widget,
             gpointer   data)
{
  g_print ("4\n");
}



static void
activate (GtkApplication *app,
          gpointer        user_data)
{
  GtkWidget *window;
  GtkWidget *grid;
  GtkWidget *button;

  /* create a new window, and set its title */
  window = gtk_application_window_new (app);
  gtk_window_set_title (GTK_WINDOW (window), "Window");
  gtk_container_set_border_width (GTK_CONTAINER (window), 10);

  /* Here we construct the container that is going pack our buttons */
  grid = gtk_grid_new ();

  /* Pack the container in the window */
  gtk_container_add (GTK_CONTAINER (window), grid);

  button = gtk_button_new_with_label ("1");
  g_signal_connect (button, "clicked", G_CALLBACK (print_1), NULL);
  gtk_grid_attach (GTK_GRID (grid), button, 0, 0, 1, 1);
  

  button = gtk_button_new_with_label ("2");
  g_signal_connect (button, "clicked", G_CALLBACK (print_2), NULL);
  gtk_grid_attach (GTK_GRID (grid), button, 1, 0, 1, 1);
  

  button = gtk_button_new_with_label ("3");
  g_signal_connect (button, "clicked", G_CALLBACK (print_3), NULL);
  gtk_grid_attach (GTK_GRID (grid), button, 0, 1, 1, 1);


  button = gtk_button_new_with_label ("4");
  g_signal_connect (button, "clicked", G_CALLBACK (print_4), NULL);
  gtk_grid_attach (GTK_GRID (grid), button, 1, 1, 1, 1);


  button = gtk_button_new_with_label ("Quit");
  g_signal_connect_swapped (button, "clicked", G_CALLBACK (gtk_widget_destroy), window);
  gtk_grid_attach (GTK_GRID (grid), button, 0, 2, 2, 1);

  /* Now that we are done packing our widgets, we show them all
   * in one go, by calling gtk_widget_show_all() on the window.
   * This call recursively calls gtk_widget_show() on all widgets
   * that are contained in the window, directly or indirectly.
   */
  gtk_widget_show_all (window);

  

}

int
main (int    argc,
      char **argv)
{
  GtkApplication *app;
  int status;

  app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  status = g_application_run (G_APPLICATION (app), argc, argv);
  g_object_unref (app);

  return status;
}
