#include "main.h"
/**
 * _islower - function that checks for lowercase character
 * @c: is the int that will use for the function argument
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
