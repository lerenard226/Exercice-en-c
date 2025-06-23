#include <stdio.h>
int main(void)
{
    // EXERCICE 6:
    /*
    Écrire un programme en C  qui permet de calculer le périmètre d'un rectangle. 
    */

    //CODE
    int longueur,largeur,perimetre;
    printf("Entrer la longueur du rectangle : ");
    scanf("%d",&longueur);
     printf("Entrer la largeur du rectangle : ");
    scanf("%d",&largeur);
    perimetre=(longueur+largeur)*2;
    printf("le périmètre est de : %d",perimetre);
    return 0;
}