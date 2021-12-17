#include <stdio.h>
#include <string.h>
#include <stdbool.h>

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

int main()
{
    char napis[100];
    scanf("%s",napis);
    if(palindrom(napis))
        printf("Napis jest palindromem \n");
    else
        printf("Napis nie jest palindromem \n");
    return 0;
}
