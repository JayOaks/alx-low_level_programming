#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * my_atoi - Converts a string to an integer, assuming it's a positive number
 * @str: The string to convert
 * Return: The converted integer, 
 * or -1 if the string is not a valid positive number
 */
int my_atoi(char *str)
{
int result = 0;

if (str[0] == '\0')
{
return (-1);
}

for (int i = 0; str[i] != '\0'; i++)
{
if (str[i] < '0' || str[i] > '9')
{
return (-1);
}
result = result * 10 + (str[i] - '0');
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

num1 = my_atoi(argv[1]);
num2 = my_atoi(argv[2]);

if (num1 <= 0 || num2 <= 0)
{
printf("Error\n");
exit(98);
}

mul = (long)num1 *num2;
printf("%ld\n", mul);

return (0);
}
