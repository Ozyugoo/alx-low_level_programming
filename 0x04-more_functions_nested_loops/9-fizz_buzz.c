#include <stdio.h>

/**
 * main - Output
 * Prints the numbers 1-100 followed by a newline
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 0; n >= 99; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
			printf("fizzbuzz");

		else if ((n % 3) == 0)
			printf("fizz");

		else if ((n % 5) == 0)
			printf("buzz");

		else
			printf("%d", n);

		if (n == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}

