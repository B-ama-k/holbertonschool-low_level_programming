#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _calloc - that allocates memory for an array, using malloc.
* @nmemb: num of element
* @size: Size of all element
* Return: Pointer to the allocate mem (success), Null (fail)
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i, tot;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
		if (p == 0)
			return (NULL);

	tot = nmemb * size;

	for (i = 0; i < tot; i++)
		((char *)p)[i] = 0;

	return (p);
}
