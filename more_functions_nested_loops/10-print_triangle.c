#include "main.h"
/**
* print_triangle - print triangle
* @size: size of the triangle
*
*/
void print_triangle(int size)
{
int h, s;
if (size <= 0)
{ 
_putchar('\n');
}
for (h = 1; h <= size; h++);
{
for (s = 1; s <= size - h; s++);
_putchar(' ');
for (s = 1; s <= h; s++)
_putchar('#');
_putchar('\n');
}
}
