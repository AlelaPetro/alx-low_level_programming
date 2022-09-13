#include "main.h"

/**
 * main - Entry point
 *
 * Description: print alphabet
 *
 * Return: 0 always
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
