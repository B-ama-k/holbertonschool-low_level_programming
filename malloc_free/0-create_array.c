#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array of chars,
* and initializes it with a specific char.
* @size: the size of the array.
* @c: the char in the array.
* Return: arr (success), NULL (0).
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
