#include <stdio.h>
int main(void)
{
    // EXERCICE 2:
    /*
    Écrire  un programme en C permettant de saisir deux nombres et d'afficher leur produit.
    */

    //CODE
    int nombre1=0;
    int nombre2=0;
    printf("Entrer un premier nombre : ");
    scanf("%d",&nombre1);
    printf("Entrer un deuxième nombre : ");
    scanf("%d",&nombre2);
    printf("le produit de %d et %d est %d\n",nombre1,nombre2,nombre1*nombre2);
    return 0;
}