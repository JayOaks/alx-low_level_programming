#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int j;
char *str;
va_list args;

va_start(args, n);

if (separator == NULL)
separator = "";

for (j = 0; j < n; j++)
{
str = va_arg(args, char *);

if (str == NULL)
str = "(nil)";
printf("%s", str);

if (j < n - 1)
printf("%s", separator);
}

va_end(args);
printf("\n");
}
