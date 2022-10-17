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
	int digit;

	for (num = 0; num < 9; num++)
	{
		for (digit = 1; digit < 10; digit++)
		{
			putchar(num);
			putchar(digit);

			if ((num == 9 + 0) && (digit == 10 + 0))
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
