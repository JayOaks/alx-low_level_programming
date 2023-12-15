#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number to modify
 * @index: the index of the bit to set
 *
 * Return: 1 if it worked, else -1 if it failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);

*n |= 1UL << index;
return (1);
}