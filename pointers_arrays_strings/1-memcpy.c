#include "main.h"

/**
* _memcpy - copy memory area
* @dest: destination.
* @src: source.
* @n: byte to copy.
* Return: src (success).
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	for (; c < n; c++)
	{
		dest[c] = src[c];
	}
	return (src);
}
