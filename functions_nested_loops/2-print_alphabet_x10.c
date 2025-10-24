#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - affiche l'alphabet x10
 *
 * Return: always 0.
 */
void print_alphabet_x10(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('c + 10');
_putchar('\n')

}
