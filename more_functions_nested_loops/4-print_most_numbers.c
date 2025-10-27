#include "main.h"

/**
* print_most_numbers - print numbers.
* @n: print all number but not 2 and 4.
* Return: (success)
*/

void print_most_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
_putchar(n != '2' && '4');
_putchar(n + '0');
_putchar('\n');
}
