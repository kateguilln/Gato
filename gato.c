#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// se inicializa la variable turno globalmente
int turno;

// funcion utilizada por todos los botones para cambiar el tablero
void on_clicked_1(GtkWidget *widget, gpointer data) {
    GtkImage *image = (GtkImage *) data;
    if (turno == 0){
      gtk_image_set_from_file(image,  "./x_1.png");
      turno += 1;
    } else if (turno == 1){
      gtk_image_set_from_file(image, "./o_1.png");
      turno -= 1;
    }

// se le quita la sensibilidad al boton para que no se cambie el signo al
// tocarlo de nuevo
    gtk_widget_set_sensitive (widget, FALSE);
}

/*
void reinicio(GtkWidget *widget, gpointer data) {
    GtkImage *image = (GtkImage *) data;
    gtk_image_set_from_file(image, "/home/aron/proyecto_c1/proyecto_c/vacio_1.png");
}
*/

int main(int argc, char* argv[]){
  // se usa una semilla para poder generar un numero random
  srand(time(0));
  // se determina el turno como 0 o 1 para saber que jugador empieza
  turno = (rand() %2);

  GtkBuilder *builder;
  GtkWidget *window;
  GtkWidget *reiniciar;
  GtkWidget *button_1;
  GtkWidget *button_2;
  GtkWidget *button_3;
  GtkWidget *button_4;
  GtkWidget *button_5;
  GtkWidget *button_6;
  GtkWidget *button_7;
  GtkWidget *button_8;
  GtkWidget *button_9;
  GtkWidget *imagen_1;
  GtkWidget *imagen_2;
  GtkWidget *imagen_3;
  GtkWidget *imagen_4;
  GtkWidget *imagen_5;
  GtkWidget *imagen_6;
  GtkWidget *imagen_7;
  GtkWidget *imagen_8;
  GtkWidget *imagen_9;

  gtk_init(&argc, &argv);

  // Get GUI from file
  builder = gtk_builder_new_from_file("./gato.glade");
  window = GTK_WIDGET(gtk_builder_get_object(builder, "main_window"));
  reiniciar = GTK_WIDGET(gtk_builder_get_object(builder, "reiniciar"));
  button_1 = GTK_WIDGET(gtk_builder_get_object(builder, "button_1"));
  button_2 = GTK_WIDGET(gtk_builder_get_object(builder, "button_2"));
  button_3 = GTK_WIDGET(gtk_builder_get_object(builder, "button_3"));
  button_4 = GTK_WIDGET(gtk_builder_get_object(builder, "button_4"));
  button_5 = GTK_WIDGET(gtk_builder_get_object(builder, "button_5"));
  button_6 = GTK_WIDGET(gtk_builder_get_object(builder, "button_6"));
  button_7 = GTK_WIDGET(gtk_builder_get_object(builder, "button_7"));
  button_8 = GTK_WIDGET(gtk_builder_get_object(builder, "button_8"));
  button_9 = GTK_WIDGET(gtk_builder_get_object(builder, "button_9"));
  imagen_1 = GTK_WIDGET(gtk_builder_get_object(builder, "imagen_1"));
  imagen_2 = GTK_WIDGET(gtk_builder_get_object(builder, "imagen_2"));
  imagen_3 = GTK_WIDGET(gtk_builder_get_object(builder, "imagen_3"));
  imagen_4 = GTK_WIDGET(gtk_builder_get_object(builder, "imagen_4"));
  imagen_5 = GTK_WIDGET(gtk_builder_get_object(builder, "imagen_5"));
  imagen_6 = GTK_WIDGET(gtk_builder_get_object(builder, "imagen_6"));
  imagen_7 = GTK_WIDGET(gtk_builder_get_object(builder, "imagen_7"));
  imagen_8 = GTK_WIDGET(gtk_builder_get_object(builder, "imagen_8"));
  imagen_9 = GTK_WIDGET(gtk_builder_get_object(builder, "imagen_9"));


  // Conexión de señales
  g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
  g_signal_connect(button_1, "clicked", G_CALLBACK(on_clicked_1), imagen_1);
  g_signal_connect(button_2, "clicked", G_CALLBACK(on_clicked_1), imagen_2);
  g_signal_connect(button_3, "clicked", G_CALLBACK(on_clicked_1), imagen_3);
  g_signal_connect(button_4, "clicked", G_CALLBACK(on_clicked_1), imagen_4);
  g_signal_connect(button_5, "clicked", G_CALLBACK(on_clicked_1), imagen_5);
  g_signal_connect(button_6, "clicked", G_CALLBACK(on_clicked_1), imagen_6);
  g_signal_connect(button_7, "clicked", G_CALLBACK(on_clicked_1), imagen_7);
  g_signal_connect(button_8, "clicked", G_CALLBACK(on_clicked_1), imagen_8);
  g_signal_connect(button_9, "clicked", G_CALLBACK(on_clicked_1), imagen_9);


  // Show and start main loop
  gtk_widget_show_all(window);
  gtk_main();
  return 0;
}
