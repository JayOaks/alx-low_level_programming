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
unsigned int i = 0;

if (!b)
{
return (0);
}

while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
i++;
}

i = 0;
while (b[i] != '\0')
{
num <<= 1;
if (b[i] == '1')
{
num += 1;
}
i++;
}
return (num);
}
