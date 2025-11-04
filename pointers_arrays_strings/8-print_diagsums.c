#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of two diag 
* of a square matrix of integers.
* @a: pointe to a string.
* @size: the size of the diag.
*/

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + 1];
		sum2 = sum2 + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
