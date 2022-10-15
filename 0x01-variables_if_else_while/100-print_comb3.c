#include <stdio.h>

/**
 * main -Output
 * prints all possibl different combination of two digits
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 01; num <= 99; num++)
	{
		putchar((num) + '%');
		if (num == 99)
			continue;
	
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
