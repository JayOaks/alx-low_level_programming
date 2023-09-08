#include <stdio.h>

/**
 * main - Entry point
 * Description: Hexadecimals
 * Return: 0
 */

int main(void)
{
int i;

for (i = 0; i < 16; i++)
{
putchar((i + '0'));:putchar(i + 'a' - 10);
}
putchar('\n');
return (0);
}
