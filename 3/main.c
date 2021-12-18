// main.c

#include <stdio.h>
#include <assert.h>
#include "funkcja.h"


int main()
{
    long int n;
    printf("Podaj naturalne n wieksze od 0:\n");
    scanf("%ld",&n);
    assert(n>0);
    printf("Phi(%ld) = %d\n",n,phi(n));
    return 0;
}
