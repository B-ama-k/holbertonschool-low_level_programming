#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - entry point
*
* Return: always 0 (success)
*/
void main(void)
{
char nombre;
for (nombre = '0'; nombre <= '10'; nombre++)
putchar(nombre);
putchar('\n');
return (0);
}
