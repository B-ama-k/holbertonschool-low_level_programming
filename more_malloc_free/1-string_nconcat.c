#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - that concatenates two strings.
* @s1: 
* @s2:
* @n:
* Return:
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1 = 0, len2 = 0, i, j;
    char *s;

    if (!s1) s1 = "";
    if (!s2) s2 = "";

    while (s1[len1]) len1++;
    while (s2[len2]) len2++;

    if (n > len2) n = len2;

    s = malloc(len1 + n + 1);
    if (!s) return NULL;

    for (i = 0; i < len1; i++)
        s[i] = s1[i];
    for (j = 0; j < n; j++)
        s[i + j] = s2[j];

    s[i + j] = '\0';
    return s;
}
