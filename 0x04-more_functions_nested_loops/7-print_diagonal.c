 #include "main.h"

/**
 * print_diagonal - Output
 * Prints a diagonal (\) line
 * @n: The number of times \ will be printed
 */

void print_diagonal(int n)
{
	int print;
	int slant;

	if (n > 0)
	{
		for (print = 0; print < n; print++)
		{
			for (slant = 0; slant < print; slant++)
				_putchar(' ');
			_putchar('\\');

			if (print == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}

