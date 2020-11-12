float tab[4]={24,25,26,27};
int rechercherValeur(float element)
{ 
    int n=0;
    for (int i = 0; i < 4; i++)
    {
      
        if (element ==tab[i])
        {
            n=1;
        }
    }

    return n ;
}
int position(int element){
    int n;
    for (int i = 0; i < 4; i++)
    {
        if (element ==tab[i])
            n=i;
    }
    return n;
}