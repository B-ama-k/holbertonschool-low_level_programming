#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - entry point
*
* Return: always 0 (success)
*/
int main(void)
{
char alPHA;
for (alPHA = 'a'; alPHA <= 'z'; alPHA++)
putchar(alPHA);
for (alPHA = 'A'; alPHA <= 'Z'; alPHA++)
putchar(alPHA);
putchar('\n');
return (0);
}
