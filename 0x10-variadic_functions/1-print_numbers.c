#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string printed between numbers
 * @n: number of integers
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

va_start(args, n);

if (separator == NULL)
separator = "";

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (i < n - 1)
{
printf("%s", separator);
}
}

va_end(args);
printf("\n");
}
