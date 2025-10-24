#include "main.h"
/**
 * print_last_digit - give the last digit
 * @n: the last digit we want
 * Return: the last digit of n (always posit)
 */
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
return (-n);
else
return (n);
}
