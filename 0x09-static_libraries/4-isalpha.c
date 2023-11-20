#include "main.h"
#include <stdio.h>

/**
* _isalpha - checks if a character is alphabetic
* @c: character to be checked
* Return: 1 = character is alphabetic, 0 = character is not alphabetic
**/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
