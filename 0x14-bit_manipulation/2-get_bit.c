#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: the number to search
 * @index: the index of the bit to get
 *
 * Return: the value of the bit at index, else -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);

return ((n >> index) & 1);
}
