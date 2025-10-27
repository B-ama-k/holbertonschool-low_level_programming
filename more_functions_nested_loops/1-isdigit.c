#include "main.h"
#include <stdio.h>
/**
* _isdigit - check for digit.
* @c: number to check.
* Return: 1 if is digit, else 0.
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
