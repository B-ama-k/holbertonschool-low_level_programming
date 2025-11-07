#include "main.h"

/**
* find - recursive who find the natural square of n
* @i: currant dec to test.
* @n: num to find the natural square of.
* Return: The natural square root of j, or -1 if none exists
*/

int find(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (find(i + 1, n));
}

/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: number to find to square.
* Return: The natural square root of n,
* if it -1 n has not a natural square root.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find(0, n));
}
