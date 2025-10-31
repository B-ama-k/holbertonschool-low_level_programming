#include "main.h"

/**
* puts_half - 
*
*/

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		for (str = 0; str < i / 2; str++)
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
