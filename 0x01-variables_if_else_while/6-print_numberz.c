#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: single digits
 *
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = '0'; c >= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
