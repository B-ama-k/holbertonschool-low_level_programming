#include "main.h"
#include <stdio.h>

/**
* string_toupper - change lowercases for uppercases
* @str: string to change.
* Return: str.
*/

char *string_toupper(char *str)
{
	int ptr = 0;

	while (str[ptr] != '\0')
	{
		if (str[ptr] >= 'a' && str[ptr] <= 'z')
		{
			str[ptr] = str[ptr] - ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}
