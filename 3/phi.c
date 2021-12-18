// phi.c

#include "funkcja.h"

int phi(long int n)
{
    int liczba=1;
    for(long int i=2;i<n;i++)
    {
        long int a=n, b=i, tmp;
        while(a%b!=0)
        {
            tmp=a%b;
            a=b;
            b=tmp;
        }
        if(b==1)
            liczba++;
    }
    return liczba;
}
