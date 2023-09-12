#include "main.h"
#include <stdio.h>

/**
* _islower - checks if a character is alphabetic
* return - 1 = character is alphabetic, 0 = character is not alphabetic
**/

int _islower(int c)
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
