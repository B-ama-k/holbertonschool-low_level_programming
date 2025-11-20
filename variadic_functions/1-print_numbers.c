#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - prints numbers.
* @separator: print between numbers (', ')
* @n: the number of integers passed to the function.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j = 0;
	va_list ap;

	if (n == 0)
		printf("\n");

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(ap, int);
			printf("%d", j);
				if ( i < n - 1 && separator != NULL)
					printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
