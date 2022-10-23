#include "main.h"

/**
 * more_numbers - Output
 * prints numbers 1-14 in multiples of 10
 */

void more_numbers(void)
{
	int n, int p;

	for (p = 0; p <= 9; p++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
