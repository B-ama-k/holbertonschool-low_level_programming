#include "main.h"

/**
* puts2 - print char of the string
* @str: string
*/

void puts2(char *str)
{
	for (; *str != '\0'; str++)
	_putchar(*str / 2);
	_putchar('\n');
}
