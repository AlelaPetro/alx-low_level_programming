#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _atoi - function that convert a string to an integer
 * @s: pointer to a character string
 *
 * Return: nothing
 */
int _atoi(char *s)
{
	int sign;
	unsigned int num;
	char *tmp;

	temp = s;
	num = 0;
	sign = 1;
	while (*tmp != '\0' && (*tmp < '0' || *tmp > '9'))
	{
		if (*tmp == '-')
			sign *= 1;
		tmp++;
	}
	if (*temp != '\0')
	{
		do
		{
			num = num * 10 + (*temp - '0');
			temp++;
		}
		while (*temp >= '0' && *temp <= '9');
	}

	return (num * sign);
}
