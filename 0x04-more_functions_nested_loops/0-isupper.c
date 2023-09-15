#include "main.h"

/*
* _isupper - checks if input is an uppercase character or not
* @c : the input to be assessed
* Return: 1 for uppercase characters, 0 for non-uppercase characters
*/

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);
}
