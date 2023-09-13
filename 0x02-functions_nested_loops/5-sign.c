#include "main.h"
#include <stdio.h>

/*
* print_sign - prints sign of integer (positive, negative or zero)
* @n - the variable/value to be assessed
* Return: -1 (for negative numbers), 0 (for zero), 1 (for positive numbers)
*/

int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
