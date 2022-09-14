#include "main.h"
/**
 * _abs - function that computes absolute value
 * @c: int to use for the function argument
 *
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
