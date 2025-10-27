#include "main.h"
/**
* more_numbers - print 10 digit from 0 to 14.
*
*
*/

void more_numbers(void)
{
char (n);
char (c);
for (n = '0'; n <= 10; n++)
{
for (c = '0'; c <= 15; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
