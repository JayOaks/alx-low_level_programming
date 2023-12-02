#include "variadic_functions.h"

/**
 * print_all - prints anything according to a format string
 * @format: a string representing the format types
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
int i;
char *str;
int fl;
va_list args;

va_start(args, format);
i = 0;

while (format != NULL && format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
fl = 0;
break;
case 'i':
printf("%i", va_arg(args, int));
fl = 0;
break;
case 'f':
printf("%f", va_arg(args, double));
fl = 0;
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
fl = 0;
break;
default:
fl = 1;
break;
}
if (format[i + 1] != '\0' && fl == 0)
printf(",");
i++;
}

printf("\n");
va_end(args);
}
