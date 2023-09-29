#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: Prints all the command-line arguments separated by a new line.
 * @argc: The number of command-line arguments, including the program name.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 on successful execution.
 */

int main(int argc, char *argv[])
{
    int i;
    // Loop through all the command-line arguments, including the program name.
    for (i = 0; i < argc; i++) {
        // Print each argument followed by a new line.
        printf("%s\n", argv[i]);
    }

    return (0);
}
