#include "fonctions.h"


    /*  Question 5 : main*/
int main(int argc, char *argv[])
{
    
    int n, m, choix, Matrice[100][100], A[100][100], B[100][100], vecteur[100];

    // Initialisation de GTK+
    gtk_init(&argc, &argv);

    // Création de la fenêtre principale
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Made By NK");
    gtk_widget_set_size_request(window, 250, 150);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Création du conteneur de type GtkBox
    GtkWidget *box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 10);
    gtk_container_add(GTK_CONTAINER(window), box);

    // Création du texte d'instruction
    GtkWidget *label = gtk_label_new("Cliquez sur un bouton pour choisir une option");
    gtk_box_pack_start(GTK_BOX(box), label, FALSE, FALSE, 0);

    // Création des boutons et ajout dans le conteneur
    GtkWidget *button0 = gtk_button_new_with_label("0. Quitter le programme");
    g_signal_connect(button0, "clicked", G_CALLBACK(Sortir), NULL);
    gtk_box_pack_start(GTK_BOX(box), button0, FALSE, FALSE, 0);

    GtkWidget *button1 = gtk_button_new_with_label("1. Enregistrer une nouvelle matrice");
    g_signal_connect(button1, "clicked", G_CALLBACK(StockageElement), NULL);
    gtk_box_pack_start(GTK_BOX(box), button1, FALSE, FALSE, 0);

    GtkWidget *button2 = gtk_button_new_with_label("2. Afficher la Matrice");
    g_signal_connect(button2, "clicked", G_CALLBACK(AffichageElementMatrice), NULL);
    gtk_box_pack_start(GTK_BOX(box), button2, FALSE, FALSE, 0);

    GtkWidget *button3 = gtk_button_new_with_label("3. Faire l'addition de deux matrices");
    g_signal_connect(button3, "clicked", G_CALLBACK(AdditionMatrice), NULL);
    gtk_box_pack_start(GTK_BOX(box), button3, FALSE, FALSE, 0);

    GtkWidget *button4 = gtk_button_new_with_label("4. Faire la soustraction de deux matrices");
    g_signal_connect(button4, "clicked", G_CALLBACK(SoustractionMatrice), NULL);
    gtk_box_pack_start(GTK_BOX(box), button4, FALSE, FALSE, 0);

    GtkWidget *button5 = gtk_button_new_with_label("5. Faire la multiplication de deux matrices");
    g_signal_connect(button5, "clicked", G_CALLBACK(MultiplicationMatrice), NULL);
    gtk_box_pack_start(GTK_BOX(box), button5, FALSE, FALSE, 0);

    GtkWidget *button6 = gtk_button_new_with_label("6. Faire le produit matrice-vecteur");
    g_signal_connect(button6, "clicked", G_CALLBACK(ProduitMatriceVecteur), NULL);
    gtk_box_pack_start(GTK_BOX(box), button6, FALSE, FALSE, 0);

    // Affichage de la fenêtre principale
    gtk_widget_show_all(window);

    // Exécution de la boucle principale de GTK+
    gtk_main();

    return 0;

    return 0;
}