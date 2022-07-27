// INclusión de bibliotecas necesarias

#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Incialización de variables globales
int turno;
char x1, x2, x3, x4, x5, x6, x7, x8, x9;

// Funcion utilizada por el boton 1  para cambiar el tablero
void on_clicked_1(GtkWidget *widget, gpointer data) {
    GtkImage *image = (GtkImage *) data;
    if (turno == 0){
      gtk_image_set_from_file(image,  "./x_1.png");
      x1 = 'x';
      turno += 1;
    } else if (turno == 1){
      gtk_image_set_from_file(image, "./o_1.png");
      turno -= 1;
      x1 = 'o';
    }
// Se le quita la sensibilidad al boton para que no se cambie el signo al
// tocarlo de nuevo.
    gtk_widget_set_sensitive (widget, FALSE);
}

// Funcion utilizada por el boton 2  para cambiar el tablero
void on_clicked_2(GtkWidget *widget, gpointer data) {
    GtkImage *image = (GtkImage *) data;
    if (turno == 0){
      gtk_image_set_from_file(image,  "./x_1.png");
      x2 = 'x';
      turno += 1;
    } else if (turno == 1){
      gtk_image_set_from_file(image, "./o_1.png");
      turno -= 1;
      x2 = 'o';
    }
    gtk_widget_set_sensitive (widget, FALSE);
}

// Funcion utilizada por el boton 3  para cambiar el tablero

void on_clicked_3(GtkWidget *widget, gpointer data) {
    GtkImage *image = (GtkImage *) data;
    if (turno == 0){
      gtk_image_set_from_file(image,  "./x_1.png");
      x3 = 'x';
      turno += 1;
    } else if (turno == 1){
      gtk_image_set_from_file(image, "./o_1.png");
      turno -= 1;
      x3 = 'o';
    }
    gtk_widget_set_sensitive (widget, FALSE);
}

// Funcion utilizada por el boton 4 para cambiar el tablero

void on_clicked_4(GtkWidget *widget, gpointer data) {
    GtkImage *image = (GtkImage *) data;
    if (turno == 0){
      gtk_image_set_from_file(image,  "./x_1.png");
      x4 = 'x';
      turno += 1;
    } else if (turno == 1){
      gtk_image_set_from_file(image, "./o_1.png");
      turno -= 1;
      x4 = 'o';
    }
    gtk_widget_set_sensitive (widget, FALSE);
}

// Funcion utilizada por el boton 5  para cambiar el tablero

void on_clicked_5(GtkWidget *widget, gpointer data) {
    GtkImage *image = (GtkImage *) data;
    if (turno == 0){
      gtk_image_set_from_file(image,  "./x_1.png");
      x5 = 'x';
      turno += 1;
    } else if (turno == 1){
      gtk_image_set_from_file(image, "./o_1.png");
      turno -= 1;
      x5 = 'o';
    }
    gtk_widget_set_sensitive (widget, FALSE);
}

// Funcion utilizada por el boton 6  para cambiar el tablero

void on_clicked_6(GtkWidget *widget, gpointer data) {
    GtkImage *image = (GtkImage *) data;
    if (turno == 0){
      gtk_image_set_from_file(image,  "./x_1.png");
      x6 = 'x';
      turno += 1;
    } else if (turno == 1){
      gtk_image_set_from_file(image, "./o_1.png");
      turno -= 1;
      x6 = 'o';
    }
    gtk_widget_set_sensitive (widget, FALSE);
}

// Funcion utilizada por el boton 7 para cambiar el tablero

void on_clicked_7(GtkWidget *widget, gpointer data) {
    GtkImage *image = (GtkImage *) data;
    if (turno == 0){
      gtk_image_set_from_file(image,  "./x_1.png");
      x7 = 'x';
      turno += 1;
    } else if (turno == 1){
      gtk_image_set_from_file(image, "./o_1.png");
      turno -= 1;
      x7 = 'o';
    }
    gtk_widget_set_sensitive (widget, FALSE);
}

// Funcion utilizada por el boton 8  para cambiar el tablero

void on_clicked_8(GtkWidget *widget, gpointer data) {
    GtkImage *image = (GtkImage *) data;
    if (turno == 0){
      gtk_image_set_from_file(image,  "./x_1.png");
      x8 = 'x';
      turno += 1;
    } else if (turno == 1){
      gtk_image_set_from_file(image, "./o_1.png");
      turno -= 1;
      x8 = 'o';
    }
    gtk_widget_set_sensitive (widget, FALSE);
}

// Funcion utilizada por el boton 9 para cambiar el tablero

void on_clicked_9(GtkWidget *widget, gpointer data) {
    GtkImage *image = (GtkImage *) data;
    if (turno == 0){
      gtk_image_set_from_file(image,  "./x_1.png");
      x9 = 'x';
      turno += 1;
    } else if (turno == 1){
      gtk_image_set_from_file(image, "./o_1.png");
      turno -= 1;
      x9 = 'o';
    }
    gtk_widget_set_sensitive (widget, FALSE);
}

// Función que se usa para saber quién gana; con cada movimiento se debe
// cliquear este botón, si label del botón no cambia, siga jugando, cuando un
// jugador gana, aparace un mensaje que indica el símbolo que ganó. Si ya el
// tablero se llenó y no se puede hacer click en el botón; no hay ganador.

void on_clicked_mensaje(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel *) data;
    if (x1 == 'x' && x1 == x2 && x1 == x3
    || x4 == 'x' && x4 == x5 && x4 == x6
    || x7 == 'x' && x7 == x8 && x7 == x9

    || x1 == 'x' && x1 == x4 && x1 == x7
    || x2 == 'x' && x2 == x5 && x2 == x8
    || x3 == 'x' && x3 == x6 && x3 == x9

    || x1 == 'x' && x1 == x5 && x1 == x9
    || x3 == 'x' && x3 == x5 && x3 == x7){
      gtk_label_set_text(label, "Gana X");
    }
    if (x1 == 'o' && x1 == x2 && x1 == x3
    || x4 == 'o' && x4 == x5 && x4 == x6
    || x7 == 'o' && x7 == x8 && x7 == x9

    || x1 == 'o' && x1 == x4 && x1 == x7
    || x2 == 'o' && x2 == x5 && x2 == x8
    || x3 == 'o' && x3 == x6 && x3 == x9

    || x1 == 'o' && x1 == x5 && x1 == x9
    || x3 == 'o' && x3 == x5 && x3 == x7){
      gtk_label_set_text(label, "Gana O");
    }
}

int main(int argc, char* argv[]){
  // Se usa una semilla para poder generar un numero random
  srand(time(0));
  // Se determina el turno como 0 o 1 para saber que jugador empieza
  turno = (rand() %2);

  // Definición de los widgets

  GtkBuilder *builder;
  GtkWidget *window;
  GtkWidget *mensaje;
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
  GtkWidget *label_r;

  gtk_init(&argc, &argv);  // Inicialización

  // Obtener i_d's de los widgets

  builder = gtk_builder_new_from_file("./gato.glade");
  window = GTK_WIDGET(gtk_builder_get_object(builder, "main_window"));
  mensaje = GTK_WIDGET(gtk_builder_get_object(builder, "mensaje"));
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
  label_r = GTK_WIDGET(gtk_builder_get_object(builder, "label_r"));


  // Conexión de señales
  g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
  g_signal_connect(button_1, "clicked", G_CALLBACK(on_clicked_1), imagen_1);
  g_signal_connect(button_2, "clicked", G_CALLBACK(on_clicked_2), imagen_2);
  g_signal_connect(button_3, "clicked", G_CALLBACK(on_clicked_3), imagen_3);
  g_signal_connect(button_4, "clicked", G_CALLBACK(on_clicked_4), imagen_4);
  g_signal_connect(button_5, "clicked", G_CALLBACK(on_clicked_5), imagen_5);
  g_signal_connect(button_6, "clicked", G_CALLBACK(on_clicked_6), imagen_6);
  g_signal_connect(button_7, "clicked", G_CALLBACK(on_clicked_7), imagen_7);
  g_signal_connect(button_8, "clicked", G_CALLBACK(on_clicked_8), imagen_8);
  g_signal_connect(button_9, "clicked", G_CALLBACK(on_clicked_9), imagen_9);
  g_signal_connect(mensaje, "clicked", G_CALLBACK(on_clicked_mensaje), label_r);


  // Muestra e inicia el bucle principal

  gtk_widget_show_all(window);
  gtk_main();
  return 0;
}
