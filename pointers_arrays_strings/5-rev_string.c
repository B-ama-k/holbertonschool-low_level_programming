#include "main.h"
#include <stdio.h>
/**
*
*
*
*/

void rev_string(char *s)
{
	int cnt, str, swp;
	for (cnt = 0; s[cnt] != '\0'; cnt++)
	{
		for (str = 0; str < cnt / 2; str++)
		swp = s[str];
		s[str] = s[cnt - 1 - str];
		s[cnt - 1 - str] = swp;
	}
}
