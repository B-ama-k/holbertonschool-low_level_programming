#include "main.h"

/**
* _memset - fills memory with a constant bytes.
* @s: pointers.
* @b: constant byte.
* @n: first bytes.
* Return: s (success).
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char c;
	
	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
