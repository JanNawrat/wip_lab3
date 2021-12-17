#include <stdio.h>
#include <math.h>

double f(double x)
{
    return sin(x);
}

double rozwiazanie(double a, double b, double eps)
{
    double x = (a+b)/2;
    while(!( f(x)*f(x-eps)<=0 || f(x)*f(x+eps)<=0 ))
    {
        if( f(x)*f(a)>0 )
            a=x;
        else
            b=x;
        x = (a+b)/2;
    }
    return x;
}

main()
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
