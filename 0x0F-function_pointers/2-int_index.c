#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array using a comparison function
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @cmp: pointer to function that compares the integers
 * Return: 0 if the condition is met, -1 if the condition is not met
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int j;

if (size <= 0)
return (-1);

if (!array || !cmp)
return (-1);

for (j = 0; j < size; j++)
{
if (cmp(array[j]))
return (j);
}

return (-1);
}
