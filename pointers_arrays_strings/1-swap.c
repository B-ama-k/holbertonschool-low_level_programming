#include "main.h"
#include <stdio.h>
/**
* swap_int - swap the values of two integers.
* @a: pointer of a.
* @b: pointer of b.
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
