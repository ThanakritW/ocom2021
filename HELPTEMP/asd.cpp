#include<stdio.h>
main()
{
    long T,N[100],M[100],i,x;
    scanf("%ld",&T);
    for(i=0; i<T; i++)
    {
        scanf("%ld%ld",&N[i],&M[i]);
    }
    for(x=0; x<T; x++)
    {
        for(i=1; i<=10000; i++)
        {
            if(i*i>N[x] || i*4+4>M[x]){
                printf("%ld\n",i+1);
                break;
        }
        }


    }
}