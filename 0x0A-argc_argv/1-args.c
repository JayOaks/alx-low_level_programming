#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * Description: Prints the number of command-line arguments (excluding the program name).
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 on successful execution.
 */

int main(int argc, char *argv[])
{
    // Subtract 1 from argc to exclude the program name.
    printf("%d\n", argc - 1);

    return (0);
}
