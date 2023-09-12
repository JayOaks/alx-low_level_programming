#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints all alphabets in lowercase
 **/

void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
