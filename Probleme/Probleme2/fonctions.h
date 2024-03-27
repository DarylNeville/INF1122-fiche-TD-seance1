#ifndef __FONCTIONS_H__
#define __FONCTIONS_H__

    #include <stdio.h>

    /*  Declaration des fonctions que seront utilisées  */

    void StockageElement(int Matrice[][100], int ligne, int colonne);
    void StockageElementVecteur(int *vecteur, int taille);
    void AffichageElementVecteur(int *vecteur, int taille);
    void AffichageElementMatrice(int Matrice[][100], int ligne, int colonne);
    void AdditionMatrice(int A[][100], int B[][100], int ligne, int colonne);
    void SoustractionMatrice(int A[][100], int B[][100], int ligne, int colonne);
    void MultiplicationMatrice(int A[][100], int B[][100], int ligne, int colonne);
    void ProduitMatriceVecteur(int Matrice[][100], int ligne, int colonne, int *vecteur);

#endif