#include "main.h"

/**
 * _puts(char *str) - function that prints a string, followed by a new line, to stdout
 * @str: string to print
 * Return: error
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0');
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
