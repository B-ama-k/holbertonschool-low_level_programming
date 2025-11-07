#include "main.h"

int check(int n, int i);
/**
* is_prime_number - check if n is prime
* @n: Integer to check
* Return: 1 if prime, 0 if not.
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check(n, 2));
}

/**
* check - test recursive if n is a diviser.
* @i: diviseur a tester.
* @n: nombre à tester.
* Return: 1 if no divise is found,
* 0 if divise is found.
*/

int check(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (check(n, i + 1));
	}
}
