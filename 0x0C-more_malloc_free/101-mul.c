#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _atoll - Converts a character array to a long long integer
 * @s: character array to convert
 * Return: returns long long integer from array, returns 0 if none found
 */

long long _atoll(char *s)
{
long long retval = 0;
int i = 0, neg = 1;

if (s[i] == '-')
{
neg = -1;
i++;
}
while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
{
retval = (retval * 10) + (s[i] - '0');
i++;
}
return (retval *neg);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: int
 */

int main(int argc, char *argv[])
{
long long a, b;
unsigned long long mul;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
for (int i = 1; i < argc; i++)
{
for (int j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > '9' || argv[i][j] < '0')
{
printf("Error\n");
exit(98);
}
}
}
a = _atoll(argv[1]);
b = _atoll(argv[2]);
if (a <= 0 || b <= 0)
{
printf("Error\n");
exit(98);
}
mul = a *b;
printf("%llu\n", mul);
return (0);
}
