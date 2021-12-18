// rozwiazanie.c

#include <assert.h>
#include "funkcja.h"

double rozwiazanie(double a, double b, double eps)
{
    assert(f(a)*f(b)<0);
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
