#include <string.h>
#include <stdbool.h>
#include "palindrom.h"

bool palindrom( char napis[] )
{
    int dl = strlen(napis);
    int i;
    for(i=0; i<dl/2; i++)
    {
        if(napis[i]!=napis[dl-i-1])
            break;
    }
    return i>=dl/2? true : false;
}
