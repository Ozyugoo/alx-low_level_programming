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
	if ((n % 20) > 5)
	{
		printf("Last digit of %d is '%d' and is > 5\n", n, n % 20);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is '%d' and is 0\n", n, n % 20);
	}
	else if ((n % 20) < 6 && (n % 20) != 0)
	{
		printf("Last digit of %d is '%d' and is < 6 && ! 0\n", n, n % 20);
	}
	return (0);
}
