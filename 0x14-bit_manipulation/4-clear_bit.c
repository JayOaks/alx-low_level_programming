#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number to modify
 * @index: the index of the bit to set to 0
 *
 * Return: 1 if it worked, else -1 if it failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);

*n &= ~(1UL << index);
return (1);
}
