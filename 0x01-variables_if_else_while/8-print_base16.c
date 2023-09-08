#include <stdio.h>

/**
 * main - Entry point
 * Description: Hexadecimals
 * Return: 0
 */

int main()
{
for (int i = 0; i < 16; i++)
{
putchar('0' + i);
}
for (int i = 0; i < 6; i++)
{
putchar('a' + i);
}
putchar('\n');

return (0);
}
