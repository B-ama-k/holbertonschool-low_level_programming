#include "main.h"

/**
* puts2 - print char of the string
* @str: string
*/

void puts2(char *str)
{
	int c = 0;
	while (str[c] != '\0')
		c++;
	
	for (str = 0; *str < c / 2; str++)
	_putchar(*str);
	_putchar('\n');
}
