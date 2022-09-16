#include <unistd>
#include "main.h"
/**
 * _putchar - writes character c to stdout
 * @c: character to print
 * Return: 1 on success otherwise 0
 */
int _putchar(c)
{
	return (write(1, &c, 1))
}
