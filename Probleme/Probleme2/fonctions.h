#ifndef __FONCTIONS_H__
#define __FONCTIONS_H__

    #include <gtk/gtk.h>

    /*  Declaration des fonctions que seront utilisées  */

void Sortir(GtkWidget *widget, gpointer data);
void StockageElement(GtkWidget *widget, gpointer data);
void AffichageElementMatrice(GtkWidget *widget, gpointer data);
void AdditionMatrice(GtkWidget *widget, gpointer data);
void SoustractionMatrice(GtkWidget *widget, gpointer data);
void MultiplicationMatrice(GtkWidget *widget, gpointer data);
void ProduitMatriceVecteur(GtkWidget *widget, gpointer data);
#endif