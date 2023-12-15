#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 */

void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);

if (n == 0)
{
putchar('0');
return;
}

while (!(n & mask))
mask >>= 1;

while (mask)
{
if (n & mask)
putchar('1');
else
putchar('0');

mask >>= 1;
}
}
