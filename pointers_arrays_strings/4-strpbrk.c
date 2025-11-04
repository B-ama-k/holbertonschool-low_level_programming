#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes.
* @s: string to search.
* @accept: string containing the byte.
* Return: first byte of s match with one of the bytes 
* of accept, or NULL if no one found.
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	for (; s[i] != '\0'; i++)
	{
		for (; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return(&s[i]);
			}
		}
	}
	return (0);
}
