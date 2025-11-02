#include "main.h"
#include <stdio.h>

/**
* reverse_array - reverse the content of an array.
* @a: array.
* @n: number of element of the array.
* Return: void.
*/

void reverse_array(int *a, int n)
{
	int c = 0, d = n - 1, s;

	while (c < d)
	{
		s = a[c];
		a[c] = a[d];
		a[d] = s;
		c++;
		d--;
	}
}
