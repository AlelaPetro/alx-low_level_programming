#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase, followed by a new line
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
