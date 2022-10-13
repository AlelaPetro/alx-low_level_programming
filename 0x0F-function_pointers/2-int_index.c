#include "function_pointers"

/**
 * int_index - searches for an integer
 * @array: input int array
 * @size: size of an array
 * @cmp: pointer to the function to be used
 *
 * Return: -1 if size<= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
