#include <stdio.h>

/**
 * main - Output
 * prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	char p;

	for (n = 0; n <= 9; n++)
		putchar(n);

	for (p = 'a'; p <= 'f'; p++)
		putchar(p);

	putchar('\n');

	return (0);
}
