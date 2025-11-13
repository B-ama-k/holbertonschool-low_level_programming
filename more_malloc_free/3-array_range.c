#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* array_range - That creates an array of integers.
* @min: Num of elements.
* @max: size of all elements.
* Return: Pointer to the allocated mem, NULL (fail).
*/

int *array_range(int min, int max)
{
	int *arr, i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	arr = malloc(s * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
		arr[i] = min + i;

	return (arr);
}
