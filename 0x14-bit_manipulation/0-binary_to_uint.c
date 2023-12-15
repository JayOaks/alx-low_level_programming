#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, else 0
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;

if (b == NULL)
return (0);

while (*b)
{
num <<= 1;
if (*b == '1')
num += 1;
else if (*b != '0')
return (0);

b++;
}

return (num);
}
