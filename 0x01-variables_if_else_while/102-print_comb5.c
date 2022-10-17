#include <stdio.h>

/**
 * main - Output
 * Prints all possible combinations of two two-digits numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int num1, num2, num3, num4;
	{
		for (num1 = 0; num1 < 9; num1++)
		{
			for (num2 = num1 + 1; num2 < 10; num2++)
			{
				for (num3 = num2 + 1; num3 < 99; num3++)
				{
					for (num4 = num3 + 1; num4 < 100; num4++)

						putchar(num1 % 10) + '0';
						putchar(num2 % 10) + '0';
						putchar(num3 % 100) + '0';
						putchar(num4 % 100) + '0';

						if (num1 == 8 && num2 == 9 && num3 == 98 && num4 == 99)
							continue;

						putchar(',');
						putchar(' ');
				}
			}
		}

		putchar('\n');

		return (0);
}
