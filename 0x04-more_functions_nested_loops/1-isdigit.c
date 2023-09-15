#include "main.h"
#include <stdio.h>

/*
* _isdigit - checks if input is a digit between 0 and 9
* @c : the input to be assessed
* Return: 1 for digits between 0 and 9, 
*         0 for anything not a digit between 0 and 9
*/

int _isdigit(int c)
{
if ((c >= '0') && (c <= '9'))
{
return (1);
}
else
{
return (0);
}
}
