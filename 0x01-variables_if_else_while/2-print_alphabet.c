#include <stdio.h>

/**
 * main - Output
 * prints the alphabet in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	char write;

	for (write = 'a'; write <= 'z'; write++)
		putchar(write);

	putchar('\n');

	return (0);
}
