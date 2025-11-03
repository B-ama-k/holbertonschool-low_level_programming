#include "main.h"
#include <stdio.h>

/**
* _strncat - concatenates two strings.
* @dest: destination of the string.
* @src: source of the string.
* @n: bytes.
* Return: dest (success).
*/

char *_strncat(char *dest, char *src, int n)
{
	int c = 0, d = 0;

	while (dest[c] != '\0')
	{
		c++;
	}

	while (src[d] != '\0' && d < n)
	{
		dest[c] = src[d];
		c++;
		d++;
	}

	dest[c] = '\0';
	return (dest);
}
