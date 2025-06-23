#include <stdio.h>
#include <math.h>

int coordonnee(int A_x,int A_y,int B_x,int B_y);
int main(void)
{
    // EXERCICE 9:
    /*
    Écrire un programme en C  qui permet de calculerla distance entre deux point. 
    */

    //CODE
    int A_x,A_y,B_x,B_y,distance;
    printf("Entrer l'abcisce de A : ");
    scanf("%d",&A_x);
    printf("Entrer l'ordonnée de A : ");
    scanf("%d",&A_y);
    printf("Entrer l'abcisce de B : ");
    scanf("%d",&B_x);
    printf("Entrer l'ordonnée de B : ");
    scanf("%d",&B_y);
    distance=coordonnee(A_x,A_y,B_x,B_y);
    printf("\nla distance entre le point A et B est de %d unité\n",distance);
    return 0;
}

int coordonnee(int A_x,int A_y,int B_x,int B_y)
{
    int coordonnee_x,coordonnee_y,coordonnee,distance=0;
    coordonnee_x=pow((A_x-B_x),2);
    coordonnee_y=pow((A_y-B_y),2);
    coordonnee=coordonnee_x+coordonnee_y;
    distance=sqrt(coordonnee);
    return distance;
}