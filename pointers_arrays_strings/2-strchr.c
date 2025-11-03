#include "main.h"

/**
* _strchr - locate a char in a str.
* @c: char.
* @s: string.
* Return: NULL (success).
*/

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}

	if (*s == c)
		return (s);

	return (0);
}
