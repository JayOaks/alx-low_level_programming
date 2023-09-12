#include "main.h"
#include <stdio.h>

/**
  *print_alphabet_x10 - prints all alphabets in lowercase 10 times
  **/

void print_alphabet_x10(void)
{
int i = 0;

while (i < 10)
{
char current_letter = 'a';
while (current_letter <= 'z')
{
_putchar(current_letter);
current_letter++;
}

_putchar('\n');
i++;
}
}
