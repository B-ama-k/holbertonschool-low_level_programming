#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: strings to reverse.
*/

void print_rev(char *s)
{
	char n;
	for (; *s != '\0'; s++)
	{
		for (n >= '\0'; n <= 0; n--)
		_putchar(n);
		*s = n;
	}
	_putchar(*s);
	_putchar('\n');
}
