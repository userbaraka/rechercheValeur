#include <stdio.h>
#include "main.h"
void main()
{  float a;
    printf("entrer une valeur\n");//entrée les valeurs en décimal
    scanf("%f",&a);// saisir la valeur
    int c=rechercherValeur(a);
    int d=position(a);
    if (c==1)
    {
        printf("la valeur  %f est dans le tableau a la position %d\n",a,d); // décrire la valeur en décimal et la position
    }
    else
    {
        printf("l element non trouve\n");// la valeur est introuvalble
    }
    
}