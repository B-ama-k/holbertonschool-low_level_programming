#include <stdio.h>
#include <stdlib.h>
#include "main.h"
 /**
 * _isalpha - check if alphabetic character
 * @c: carac to check ASCII.
 * Return: always 1 if letter, lower or upper and 0 if not.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
