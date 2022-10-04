#include "main.h"

/**
 * create_array - creates an array of chars & intitializes
 * @size: size of an array
 * @c: char to insert
 * Return: null otherwise pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (null);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = o; index < size; index++)
		array[index] = c;

	return (array);
}
