#include <stdio.h>
#include <math.h>
int main(void)
{
    // EXERCICE 8:
    /*
    Écrire un programme en C  qui permet de calculer la puissance. 
    */

    //CODE
    float base=0,puissance=0,calcule;
    printf("Entrer le nombre : ");
    scanf("%f",&base);
    printf("Entrer la puissance : ");
    scanf("%f",&puissance);
    calcule=pow(base,puissance);
    printf(" %.0f exposant %.0f égale a  %.1f",base,puissance,calcule);
    return 0;
}