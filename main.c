#include <stdio.h>
#include "main.h"
void main()
{  
    float tab[4]={24,25,26,27},a;
    int i,test;
    char c;
    int j=0;

    do
    {
        
        if (j==0)
            printf("entrer une valeur\n");
        else
            printf("vous de devez entrer un reele\n");
        test=scanf("%f",&a);
        while ( ((c = getchar()) != '\n') && c != EOF);
        j++;
    } while (test!=1);
    int indiceValeurChercher=rechercherValeur(tab,a); //appel de la fonction rechercherValeur
    if (indiceValeurChercher)
            printf("la valeur  %.2f est dans le tableau a la position %d\n",tab[indiceValeurChercher],indiceValeurChercher);
        else
            printf("l element non trouve\n");
   }