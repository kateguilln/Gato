#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// se inicializa la variable turno globalmente
int turno;
char x1, x2, x3, x4, x5, x6, x7, x8, x9;

// funcion utilizada por todos los botones para cambiar el tablero
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
// se le quita la sensibilidad al boton para que no se cambie el signo al
// tocarlo de nuevo
    gtk_widget_set_sensitive (widget, FALSE);
}
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
void on_clicked_reiniciar(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel *) data;
    if (x1 == 'x' && x1 == x2 && x1 == x3
    || x4 == 'x' && x4 == x5 && x4 == x6
    || x7 == 'x' && x7 == x8 && x7 == x9

    || x1 == 'x' && x1 == x4 && x1 == x7
    || x2 == 'x' && x2 == x5 && x2 == x8
    || x3 == 'x' && x3 == x6 && x3 == x9

    || x1 == 'x' && x1 == x5 && x1 == x9
    || x3 == 'x' && x3 == x5 && x2 == x7){
      gtk_label_set_text(label, "x");
    }
    if (x1 == 'o' && x1 == x2 && x1 == x3
    || x4 == 'o' && x4 == x5 && x4 == x6
    || x7 == 'o' && x7 == x8 && x7 == x9

    || x1 == 'o' && x1 == x4 && x1 == x7
    || x2 == 'o' && x2 == x5 && x2 == x8
    || x3 == 'o' && x3 == x6 && x3 == x9

    || x1 == 'o' && x1 == x5 && x1 == x9
    || x3 == 'o' && x3 == x5 && x2 == x7){
      gtk_label_set_text(label, "o");
    }
}

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
  GtkWidget *label_r;

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
  g_signal_connect(reiniciar, "clicked", G_CALLBACK(on_clicked_reiniciar), label_r);



  // Show and start main loop
  gtk_widget_show_all(window);
  gtk_main();
  return 0;
}
