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
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)  
putchar(alpha);
putchar('\n');

return (0);
}
