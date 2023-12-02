#include <stddef.h>

/**
 * array_iterator - xecutes a function on each element of an array
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @action: pointer to the function to be executed
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t j;

if (!array || !action)
return;

for (j = 0; j < size; j++)
action(array[j]);
}
