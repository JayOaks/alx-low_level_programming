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
char format_char;
va_list args;

va_start(args, format);
i = 0;

while (format && format[i])
{
format_char = format[i];
if (format_char == 'c' || format_char == 'i' ||
format_char == 'f' || format_char == 's')
{
printf("%s", (i > 0) ? ", " : "");
switch (format_char)
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s", str);
break;
}
}
i++;
}

va_end(args);
printf("\n");
}
