#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search through
 * @size: size of array
 * @cmp: function used to compare
 *
 * Return: first index for which cmp dosen't return 0, or -1
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
