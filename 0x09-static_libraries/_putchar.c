#include <unistd.h>

/**
 * _putchar - Custom function to print a character
 * @c: The character to be printed
 */

int _putchar(char c)
{
return write(1, &c, 1);
}
