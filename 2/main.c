// main.c

#include <stdio.h>
#include "funkcja.h"


int main()
{
    printf("Dla f(x) = cos(x/2), a = 2, b = 4:\n");
    double eps = 0.1;
    for(int i=1;i<=8;i++)
    {
        printf("Dla eps = %.8f x = %.16f\n", eps, rozwiazanie(2,4,eps));
        eps*=0.1;
    }
    return 0;
}
