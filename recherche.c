
int rechercherValeur(float tab[],float element)
{ 
    int n=0;
    for (int i = 0; i < 4; i++)
    {
        if (element ==tab[i])
            n=i;
    }
    return n ;
}
