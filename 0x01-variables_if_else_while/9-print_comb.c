#include <stdlib.h>                                                                                                
#include <time.h>                                                                                                  
#include <stdio.h>                                                                                                 
/**
 * main - Entry point
 *
 * Description: Prints numbers
 *
 * Return: 0 always
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
