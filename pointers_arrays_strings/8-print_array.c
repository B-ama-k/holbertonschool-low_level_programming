#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_array - Print the elements
* @a: var to print
* @n: num to print
* Return: void
*/

void print_array(int *a, int n)
{
	int c = 0;

    for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
