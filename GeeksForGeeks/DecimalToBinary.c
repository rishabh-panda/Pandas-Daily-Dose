void toBinary(int N)
{
    int storage[32];
    int i=0;
    
    while(N>0)
    {
        storage[i]=N%2;
        N/=2;
        i++;
    }
    
    for(int k=i-1; k>=0; k--)
    {
        printf("%d", storage[k]);
    }
}
