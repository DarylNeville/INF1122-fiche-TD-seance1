#include "fonctions.h"

    /* Question 1  : Stockage des éléments */
void StockageElement(int Matrice[][100], int ligne, int colonne)
{
    for(int i = 0; i < ligne; i++)
    {
        for(int j = 0; j < colonne; j++)
        {
            printf("Element [%d ; %d] : ",i,j);
            scanf("%d", &Matrice[i][j]);
        }
    }

}

void StockageElementVecteur(int *vecteur, int taille)
{

    for(int j = 0; j < taille; j++)
    {
        printf("Element %d : ",j);
        scanf("%d", &vecteur[j]);
    }
}


    /* Question 2  : Affichage des éléments  */
void AffichageElementVecteur(int *vecteur, int taille) 
{
    for(int i = 0; i < taille; i++)
        printf("%7d;",vecteur[i]);

    printf("\n");
}

void AffichageElementMatrice(int Matrice[][100], int ligne, int colonne) 
{
    for(int i = 0; i < ligne; i++)
    {
        for(int j = 0; j < colonne; j++)
        {
            printf("%7d",Matrice[i][j]);
        }
        printf("\n");
    }
}

    /*  Question 3 : Opérations sur les matrices*/

/*  a) Addition des matrices    */
void AdditionMatrice(int A[][100], int B[][100], int ligne, int colonne)
{
    int C[100][100];

    for(int i = 0; i < ligne; i++)
    {
        for(int j = 0; j < colonne; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }

    }

    printf("\nLe resultat de la somme est : \n");
    AffichageElementMatrice(C, ligne, colonne);
}

/*  b)  Soustraction des matrices*/
void SoustractionMatrice(int A[][100], int B[][100], int ligne, int colonne)
{
    int C[100][100];

    for(int i = 0; i < ligne; i++)
    {
        for(int j = 0; j < colonne; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }

    }

    printf("\nLe resultat de la soustraction est : \n");
    AffichageElementMatrice(C, ligne, colonne);

}

/*  c)  Multiplications des matrices*/
void MultiplicationMatrice(int A[][100], int B[][100], int ligne, int colonne)
{
    int C[100][100];

    for(int i = 0; i < ligne; i++)
    {
        for(int j = 0; j < colonne; j++)
        {
            C[i][j] = A[i][j] * B[i][j];
        }

    }

    printf("\nLe resultat de la Multiplication est : \n");
    AffichageElementMatrice(C, ligne, colonne);

}


    /*  Question 4  : Produit Matrice Vecteur   */
void ProduitMatriceVecteur(int Matrice[][100], int ligne, int colonne, int *vecteur)
{
    int b[100] = {0};

    for(int i=0 ; i<ligne ; i++)
    {
        for(int k=0 ; k<colonne; k++)
        {
            b[i] = b[i] + (Matrice[i][k] * vecteur[k]);
        }
    }

    printf("\nLe resultat du produit Matrice - Vecteur est : \n");
    AffichageElementVecteur(b, colonne);
}