#include <stdio.h>

/**
 * main - Output
 * prints the lowercase alphabet in reverse disorder
 *
 * Return: Always 0.
 */
int main(void)
{
	char print;

	for (print = 'z'; print >= 'a'; print--)
		putchar(print);

	putchar('\n');

	return (0);
}
