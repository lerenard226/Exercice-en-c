#include <stdio.h>
#include <math.h>
int main(void)
{
    // EXERCICE 7:
    /*
    Écrire un programme en C  qui permet de calculer le volume d'une sphère. 
    */

    //CODE
    int rayon=0;
    const float PI=3.14159;
    float volume=0;
    printf("Entrer le rayon (en cm) : ");
    scanf("%d",&rayon);
    volume=pow(rayon,3)*PI*4/3;
    printf("le volume de la sphère est de %.1f cm\u00B3\n",volume);
    return 0;
}