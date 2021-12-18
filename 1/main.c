#include <stdio.h>
#include <stdbool.h>
#include "palindrom.h"


int main()
{
    char napis[100];
    printf("Podaj ciag znakow:\n");
    scanf("%s",napis);
    if(palindrom(napis))
        printf("Napis jest palindromem \n");
    else
        printf("Napis nie jest palindromem \n");
    return 0;
}
