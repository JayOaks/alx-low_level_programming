#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: Adds positive numbers and prints the result followed by a new line.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 on successful execution, 1 if there's an error.
 */

int main(int argc, char *argv[])
{
	int x = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		x += atoi(argv[i]);
	}
	printf("%d\n", x);
	return (0);
}
