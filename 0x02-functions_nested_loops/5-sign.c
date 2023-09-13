#include "main.h"
#include <stdio.h>

/*
* print_sign - Prints the sign of a number.
* @n - the variable/value to be assessed
* Return: -1 (for negative numbers), 0 (for zero), 1 (for positive numbers)
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
