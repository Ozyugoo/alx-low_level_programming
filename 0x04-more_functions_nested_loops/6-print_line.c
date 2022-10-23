#include "main.h"

/**
 * print_line - Output
 * Prints _ in a straight line
 * @n: The number times _ will be printed
 */

void print_line(int n)
{
	int print;

	if (n > 0)
	{
		for (print = 0; print < n; print++)
			_putchar('_');
	}
	_putchar('\n');
}
