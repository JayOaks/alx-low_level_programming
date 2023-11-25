#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * my_atoi - Converts a string to an integer, assuming it's a positive number
 * @str: The string to convert
 * Return: The converted integer, 
 * or -1 if the string is not a valid positive number
 */
int _atoi(char *s)
{
int result = 0;

if (s[0] == '\0')
{
return (-1);
}

for (int i = 0; s[i] != '\0'; i++)
{
if (s[i] < '0' || s[i] > '9')
{
return (-1);
}
result = result * 10 + (s[i] - '0');
}
return (result);
}

/**
 * main - Multiplies two positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
int num1, num2;
long mul;

if (argc != 3)
{
printf("Error\n");
exit(98);
}

num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);

if (num1 <= 0 || num2 <= 0)
{
printf("Error\n");
exit(98);
}

mul = (long)num1 *num2;
printf("%ld\n", mul);

return (0);
}
