#include "main.h"
#include <stdio.h>

/**
* _strcat - concatenates two strings.
* @dest: destination of the string.
* @src: source of the string.
* Return: dest (success).
*/

char *_strcat(char *dest, char *src)
{
	int c = 0, d = 0;
	
	while (dest[c] != '\0')
	{
		c++;
	}

	while (src[d] != '\0')
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	
	dest[c] = '\0';
	return (dest);
}
