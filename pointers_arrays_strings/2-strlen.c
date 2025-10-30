#include "main.h"
#include <stdio.h>
/**
*
*
*/

int _strlen(char *s)
{
    int c = 0;
    for (; *s != '\0'; *s++)
    {
        c++;
    }
    return (c);
}
