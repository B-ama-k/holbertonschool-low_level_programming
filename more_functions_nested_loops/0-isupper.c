#include "main.h"
#include <stdio.h>
/**
* _isupper - check if c is uppercase.
* @c: char to check.
* Return: 1 if is upper, else 0.
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
