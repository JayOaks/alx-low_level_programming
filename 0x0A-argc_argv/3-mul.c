#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: Multiplies two numbers and prints the result followed by a new line.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 and result when successful, 1 and Error when parameters not met.
 */

int main(int argc, char *argv[])
{
    int i = argc - 1, j = i - 1, res;
    
    if (i == 2)
    {
        res = atoi(argv[i]) * atoi(argv[j]);
        printf("%d\n", res);
        return (0);
    }
    else
    {
        printf("Error\n");
        return (1);
        }
}
