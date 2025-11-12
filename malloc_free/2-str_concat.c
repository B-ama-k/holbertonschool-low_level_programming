#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - concatenates two strings.
* @s1: First string.
* @s2: Second string.
* Return: pointer to the new concatened str (success), NULL (fail).
*/

char *str_concat(char *s1, char *s2)
{
char *array;
	unsigned int i = 0, j = 0;
	unsigned int l1 = 0, l2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		l1++;

	for (i = 0; s2[i] != '\0'; i++)
		l2++;

	array = malloc((l1 + l2 + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		array[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		array[l1 + j] = s2[j];

	array[l1 + l2] = '\0';

	return (array);
}
