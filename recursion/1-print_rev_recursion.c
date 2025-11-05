#include "main.h"

/**
* _print_rev_recursion - print a string in rev.
* @s: pointe to the string to rev.
* Return: void.
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
}
