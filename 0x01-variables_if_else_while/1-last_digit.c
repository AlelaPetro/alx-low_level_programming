#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints random number to variable
 *
 * Return: 0 always (successful)
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("last digit of %d is %d and is graeter than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, l)
	}
	else 
	{
		printf("last digit of %d is %d and is less than 6and not 0\n", n, l);
	}
	return (0);
