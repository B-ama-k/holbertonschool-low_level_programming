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
int comb;
for (comb = '0'; comb = '9'; comb++)
putchar(comb);
if (comb != '9')
putchar(',');
putchar('\n');
return (0);
}
