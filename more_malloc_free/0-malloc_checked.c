#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* malloc_checked - allocates memory.
* @b: num of bytes to allocate.
* Return: p to the allocate memory (success),
* if malloc fail (98).
*/

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);
	
	if (p == NULL)
		exit(98);
	return (p);
}
