float tab[4]={24,25,26,27};
int rechercherValeur(float element)
{ 
    int n=0;
    for (int i = 0; i < 4; i++)//boucle pour recherche de valeur
    {
      
        if (element ==tab[i])// condition de comparaison
        {
            n=1;
        }
    }

    return n ;
}
int position(int element){
    int n;
    for (int i = 0; i < 4; i++)//boucle de position des éleemnts
    {
        if (element ==tab[i])
            n=i+1;
    }
    return n;
}