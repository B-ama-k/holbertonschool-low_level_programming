#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - adds positive numbers.
* @argc: Num of arguments
* @argv: Array of arguments
* Return: 0 (success), 1 (if arg contain non-digit char).
*/

int main(int argc, char *argv[])
{
	int i, j;
	int r = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		r += atoi(argv[i]);
	}

	printf("%d\n", r);
	return (0);
}
