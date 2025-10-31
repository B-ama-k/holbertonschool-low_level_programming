#include "main.h"
#include <stdio.h>

/**
* _atoi - convert a string
* @s: string to convert.
* Return: result * sign.
*/

int _atoi(char *s)
{
	int c = 0;
	int sg = 1;
	unsigned int r = 0;
	int stt = 0;

	while (s[c] != '\0')
	{
		if (s[c] == '-')
			sg = sg * -1;

		if (s[c] >= '0' && s[c] <= '9')
		{
			stt = 1;
			r = r * 10 + (s[c] - '0');
		}
		else if (stt)
		break;
		c++;
	}
	return (r * sg);
}
