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
char alphabt;
for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
if (alphabt != 'e' && alphabt != 'q')
putchar(alphabt);
putchar('\n');
return (0);
}
