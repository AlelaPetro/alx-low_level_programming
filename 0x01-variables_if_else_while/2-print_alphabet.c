#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program prints alphabets'
 *
 * Returns: 0 Always
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)

	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
