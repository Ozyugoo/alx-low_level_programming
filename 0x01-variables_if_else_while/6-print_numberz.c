#include <stdio.h>

/**
 * main - Output
 * prints all single digits numbers of base 10 with putchar
 *
 *Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar('%d', num);

	putchar('\n');

	return (0);
}
