#include "main.h"
#include <stdio.h>

void print_alphabet_x10(void)
{
int i = 0;
char letter = 'a';

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
