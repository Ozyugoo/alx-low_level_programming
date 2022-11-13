#include "main.h"

/**
 * print_number - Output
 * prints an integer
 * @n: the integer
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
	}
}
