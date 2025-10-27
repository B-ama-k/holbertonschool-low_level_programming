#include "main.h"
/**
* print_diagonal - draws diagonal line
* @n: number of line for char
*
*/

void print_diagonal(int n)
{
int diag;
int space;
if (n <= 0)
{
_putchar('\n');
return;
}
for (diag = '0'; diag < n; diag++)
{
for (space = '0'; space < diag; space++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}