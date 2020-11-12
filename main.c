#include <stdio.h>
#include "main.h"
void main()
{  float a;
    printf("entrer une valeur\n");
    scanf("%f",&a);
    int c=rechercherValeur(a);
    int d=position(a);
    if (c==1)
    {
        printf("la valeur  %f est dans le tableau a la position %d\n",a,d);
    }
    else
    {
        printf("l element non trouve\n");
    }
    
}