#include "main.h"
/**
 * _isalphabet - function to check if c is a letter, lowercase or uppercase
 * @c: the int that will use for the function argument
 *
 * Return: 0
 */

int _isalphabet(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
