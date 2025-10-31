#include "main.h"

/**
* puts_half - that prints half of a string,
* @str: string to print
*/

void puts_half(char *str)
{
	char *i = str;
	int lg = 0;

	while (*(i + lg) != '\0')
	{
		lg++;
	}
	i = i + (lg + 1) / 2;

	while (*i != '\0')
	{
		_putchar(*i);
		i++;
	}
	_putchar('\n');
}
