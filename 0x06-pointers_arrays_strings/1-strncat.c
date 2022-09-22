#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings
 * @src: string to be concatenated
 * @dest: string to be appended
 *
 * Return: return dest on success
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
