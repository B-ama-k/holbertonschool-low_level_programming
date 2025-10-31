#include "main.h"
#include <stdio.h>

/**
* _strcpy - Copy a string
* @dest: the dest of the string
* @src: the source of the string
* Return : the string
*/

char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c = c + 1;
	}
	dest[c] = '\0';
	return (dest);
}
