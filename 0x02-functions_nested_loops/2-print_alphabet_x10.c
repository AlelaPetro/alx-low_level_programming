#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c;
	char e;

	for (e = 0; e <= 9; e++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
