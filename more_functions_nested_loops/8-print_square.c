#include "main.h"
/**
* print_square - print a square
* @size: size of the square
*/
void print_square(int size)
{
int longueur, large;

if (size > 0)
{
for (longueur = '0'; longueur < size; longueur++)
{
for (large = '0'; large < size; large++)
_putchar('#');

if (longueur == size - 1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
