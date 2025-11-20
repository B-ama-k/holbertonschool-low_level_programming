#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - Prints strings with new line.
* @separator: string of separator between each sings.
* @n: Number of strings passed
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list pa;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(pa, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(pa, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(pa);

	printf("\n");
}
