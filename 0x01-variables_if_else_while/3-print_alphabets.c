#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print if the number is positive, negative or zero
 *
 * Description: This program prints alphabets
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
