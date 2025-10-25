#include "main.h"
/**
 * print_last_digit - give the last digit
 * @n: the last digit we want
 * Return: the last digit of n (always posit)
 */
int print_last_digit(int n)
{
int c;

c = n % 10;
if (c < 0)
c = -c;
_putchar (c + '0');
return (c);
}
