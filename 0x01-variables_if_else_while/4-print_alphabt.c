#include <stdio.h>

/**
 * main - Output
 * prints the alphabet in lowercase except e and q
 *
 * Return: Always 0
 */

int main(void)
{
	char print;

	for (print = 'a'; print <= 'b'; print++)
		{
			if (print != 'e' && print != 'q')
				putchar(print);
		}
	putchar('\n');

	return (0);
}
