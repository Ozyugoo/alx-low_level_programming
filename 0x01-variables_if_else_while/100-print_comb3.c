#include <stdio.h>

/**
 * main -Output
 * prints all possibl different combination of two digits
 *
 * Return: Always 0.
 */

int main(void)
{
	int num, digit;

	for (num = 0; num < 9; num++)
	{
		for (digit = num + 1; digit < 10; digit++)
		{
			putchar(num % 10) + '0';
			putchar(digit % 10) + '0';

			if (num  == 8 && digit == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
