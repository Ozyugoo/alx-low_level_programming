#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Output
 * Prints the last digit of the number
 * Return: 0
 */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("%d Last digit of n is > 5\n", n);
	}
	else if (n == 0)
	{
		printf("%d Last digit of n is == 0\n", n);
	}
	else if (n < 6)
	{
		printf("%d Last digit of n is < 6\n", n);
	}
	return (0);
}