#include <stdio.h>
int main(void)
{
    // EXERCICE 5:
    /*
    Écrire un programme en C  qui permet d'afficher le plus grand de trois entiers saisis  au clavier. 
    */

    //CODE
    int nombre1=0;
    int nombre2=0;
    int nombre3=0;
    printf("Entrer un premier nombre : ");
    scanf("%d",&nombre1);
    printf("Entrer un deuxième nombre : ");
    scanf("%d",&nombre2);
    printf("Entrer un troixième nombre : ");
    scanf("%d",&nombre3);
    if (nombre1>nombre2&&nombre1>nombre3)
    {
        printf("\nle plus grand entre les trois nombres est %d\n",nombre1);
    }
    else if (nombre2>nombre1&&nombre2>nombre3)
    {
        printf("\nle plus grand entre les trois nombres est %d\n",nombre2);
    }
    else if (nombre3>nombre2&&nombre3>nombre1)
    {
        printf("\nle plus grand entre les trois nombres est %d\n",nombre3);
    }
    else
    {
        printf("\nTous les trois nombres sont égaux\n");
    }
    
    return 0;
}