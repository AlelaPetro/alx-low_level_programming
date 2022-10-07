#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: mem to allocate
 *
 * Return: pointer to allocated mem otherwise terminate
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
