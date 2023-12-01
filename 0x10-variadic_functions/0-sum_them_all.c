#include "variadic_functions.h"

/**
 * sum_them_all - sums up all of its given parameters
 * @n: number of parameters
 * Return: sum or fail
*/

int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
return (0);

va_list args;
int sum = 0;

va_start(args, n);

for (unsigned int i = 0; i < n; i++)
{
sum += va_arg(args, int);
}

va_end(args);

return (sum);
}