#include "main.h"
#include <stdio.h>

/**
* _strncpy - copy a string.
* @dest: destination of the string.
* @src: source of the string.
* @n: bytes.
* Return: dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	{
	int c = 0;

	while (src[c] != '\0' && c < n)
	{
		dest[c] = src[c];
		c++;
	}

	for (; c < n; c++)
	{
		dest[c] = '\0';
	}

	return (dest);
	}
}
