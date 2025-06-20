#include <stdio.h>
int main(void)
{
    // EXERCICE 3:
    /*
    Écrire  un programme en C  qui  permet d'échanger le contenu de deux entiers  A et B  saisis par l'utilisateur. et afficher ces entiers  après l’échange.
    */

    //CODE
    int A=0;
    int B=0;
    int C=0;
    printf("Entrer le nombre A : ");
    scanf("%d",&A);
    printf("Entrer le nombre B : ");
    scanf("%d",&B);
    printf("\nA = %d et B = %d\n",A,B);
    printf("\nEchange .....\n");
    C=A;
    A=B;
    B=C;
    printf("\nAprès échange : \n");
    printf("\nA = %d et B = %d\n",A,B);
    return 0;
}