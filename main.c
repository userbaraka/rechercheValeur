#include <stdio.h>
#include "main.h"
void main()
{  
    float tab[4],a;
    int i;

    printf("entrer une valeur\n");
    scanf("%f",&a);   
    int indiceValeurChercher=rechercherValeur(a); //appel de la fonction rechercherValeur
    if (indiceValeurChercher==1)
            printf("la valeur  %.2f est dans le tableau a la position %d\n",tab[indiceValeurChercher],indiceValeurChercher+1);
        else
            printf("l element non trouve\n");
   }