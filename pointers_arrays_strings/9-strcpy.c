#include "main.h"
#include <stdio.h>

/**
* _strcpy - Copy a string
* @dest: Destination de la string
* @src: Source de la string
* Return: La string
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
