#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - that prints anything.
* @format: list of type of arg passd to the function.
* Desc: c = char, i = int, f = float, s = string.
* Ignores unknown format characters.
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, n = 0;
	char *s, *c = "";
	
	va_start(ap, format);

	while (format && format[i]) /* 1ère boucle */
		i++;

	while (n < i) /* 2ème boucle */
	{
		if (format[n] == 'c')
		{
			printf("%s%c", c, va_arg(ap, int));
			c = ", ";
		}
		if (format[n] == 'i')
		{
			printf("%s%d", c, va_arg(ap, int));
			c = ", ";
		}
		if (format[n] == 'f')
		{
			printf("%s%f", c, va_arg(ap, double));
			c = ", ";
		}
		if (format[n] == 's')
		{
			s = va_arg(ap, char *);
			if (!s)
				s = "(nil)";
			printf("%s%s", c, s);
			c = ", ";
		}
		n++;
	}

	va_end(ap);
	printf("\n");
}
