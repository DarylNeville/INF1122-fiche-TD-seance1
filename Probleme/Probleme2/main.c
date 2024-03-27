#include "fonctions.h"


    /*  Question 5 : main*/
int main(void)
{
    
    int n, m, choix, Matrice[100][100], A[100][100], B[100][100], vecteur[100];


    printf("Soit a effectuer des operations sur une matrice\n\n");

    do
    {
        printf("\nQue souhaitez vous faire ? \n");
        printf("\t0. Quitter le programme\n");
        printf("\t1. Enregistrer une nouvelle matrice\n");
        printf("\t2. Afficher la Matrice\n");
        printf("\t3. Faire l'addition de deux matrices\n");
        printf("\t4. Faire la soustraction de deux matrices\n");
        printf("\t5. Faire la multiplication de deux matrices\n");
        printf("\t6. Faire le produit matrice-vecteur\n");
        printf("Choix : ");
        scanf("%d", &choix);

        switch(choix)
        {
            case 0 : 
                printf("Fin du programme...\n");
                break;

            case 1 : 
                printf("Entrez le nombre de ligne : ");
                scanf("%d", &n);
                printf("Entrez le nombre de colonne : ");
                scanf("%d", &m);

                StockageElement(Matrice, n, m);
                break;

            case 2 : 
                AffichageElementMatrice(Matrice, n, m);
                break;

            case 3 :
                printf("Entrez le nombre de ligne : ");
                scanf("%d", &n);
                printf("Entrez le nombre de colonne : ");
                scanf("%d", &m);

                printf("\n---Entrez les elements de la premiere matrice ---\n");
                StockageElement(A, n, m);
                printf("\n---Entrez les elements de la deuxieme matrice ---\n");
                StockageElement(B, n, m);

                AdditionMatrice(A, B, n, m);
                break;

            case 4 :
                printf("Entrez le nombre de ligne : ");
                scanf("%d", &n);
                printf("Entrez le nombre de colonne : ");
                scanf("%d", &m);

                printf("\n---Entrez les elements de la premiere matrice ---\n");
                StockageElement(A, n, m);
                printf("\n---Entrez les elements de la deuxieme matrice ---\n");
                StockageElement(B, n, m);

                SoustractionMatrice(A, B, n, m);
                break;

            case 5 :
                printf("Entrez le nombre de ligne : ");
                scanf("%d", &n);
                printf("Entrez le nombre de colonne : ");
                scanf("%d", &m);

                printf("\n---Entrez les elements de la premiere matrice ---\n");
                StockageElement(A, n, m);
                printf("\n---Entrez les elements de la deuxieme matrice ---\n");
                StockageElement(B, n, m);

                MultiplicationMatrice(A, B, n, m);
                break;

            case 6 :
                printf("Entrez le nombre de ligne : ");
                scanf("%d", &n);
                printf("Entrez le nombre de colonne : ");
                scanf("%d", &m);

                printf("\n---Entrez les elements de la matrice ---\n");
                StockageElement(Matrice, n, m);
                
                printf("\n---Entrez les elements du vecteur ---\n");
                StockageElementVecteur(vecteur, m);

                ProduitMatriceVecteur(Matrice, n, m, vecteur);

                break;


            default : 
                printf("\nVeuillez entrer une option parmis celles proposees\n");
                break;
                
        }
    } 
    while (choix != 0);

    return 0;
}