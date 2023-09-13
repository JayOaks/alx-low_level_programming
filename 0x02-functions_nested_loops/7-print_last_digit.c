#include "main.h"
#include <stdio.h>

/*
* print_last_digit - Prints last digit of a given value/number
* @n - The value/number to be assessed
* Return: The value of the last digit
*/

int print_last_digit(int n)
{
int last_digit = n % 10;

if (last_digit < 0)
{
last_digit = -last_digit;
}
putchar('0' + last_digit);

return last_digit;
}
