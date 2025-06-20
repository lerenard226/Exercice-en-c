#include <stdio.h>
int main(void)
{
    // EXERCICE 4:
    /*
    Écrire un un programme en C qui  permet d'afficher si un nombre  entier saisi au  clavier est pair ou impair
    */

    //CODE
    int nombre=0;
    printf("Entrer un nombre : ");
    scanf("%d",&nombre);
    if (nombre%2==0)
    {
        printf("%d est un nombre paire\n",nombre);
    }
    else
    {
        printf("%d est un nombre impaire\n",nombre);
    }
    
    
    return 0;
}