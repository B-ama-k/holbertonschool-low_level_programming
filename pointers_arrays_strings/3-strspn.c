#include "main.h"

/**
* _strspn - gets the length of a prefix substring.
* @s: string.
* @accept: checking.
* Return: i (success).
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		int f = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f = 1;
				break;
			}
		}
		if (!f)
			break;
	}
	return (i);
}
