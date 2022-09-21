#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * @str: string to be changed
 *
 * Return: address of the string
 */
char *string_toupper(char *)
{
	int i;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
