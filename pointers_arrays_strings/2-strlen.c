#include "main.h"
#include <stdio.h>
/**
* _strlen - taille d'une string.
* @s: string
* return: return la taille de la string
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
