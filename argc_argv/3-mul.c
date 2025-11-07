#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers.
* @argc: num of command-line argurment.
* @argv: array of command-line argument.
* Return: 0 (success), 1 (error).
*/

int main(int argc, char *argv[])
{
	int n1, n2, r;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	r = n1 * n2;
	printf("%d\n", r);
	return (0);
}
