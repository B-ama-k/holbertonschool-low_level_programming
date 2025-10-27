#include "main.h"
/**
* more_numbers - print 10 digit from 0 to 14.
*
*
*/

void more_numbers(void)
{
int (n);
int (c);
for (n = 0; n <= 10; n++)
{
for (c = 0; c <= 15; c++)
{
_putchar(c + '0');
}
_putchar('\n');
}
}
