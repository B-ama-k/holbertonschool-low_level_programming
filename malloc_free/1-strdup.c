#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup -  that returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: String to dup.
* Return: Pointer to the duplicated string (success),
* if the str or the memory alloc fails (NULL).
*/

char *_strdup(char *str)
{
	char *arr;
	unsigned int i = 0, j = 0;

	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		j++;
	}

	arr = malloc((j + 1) * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';

	return (arr);
}
