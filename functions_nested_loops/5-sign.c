#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _isalpha - check if lower & upper
 * @c: char to check ASCII.
 * Return: always 1 if lower and 0 is not.
 */
int print_sign(int n)
{
if (n >= '0')
{
_putchar('+');
return (1);
}
else if (n == '0')
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
