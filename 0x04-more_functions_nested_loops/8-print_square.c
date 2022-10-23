#include "main.h"

/**
 * print_square - Output
 * prints a square with #.
 * @size: The size of the square
 */

void print_square(int size)
{
	int ht, wd;

	if (size > 0)
	{
		for (ht = 0; ht < size; ht++)
		{
			for (wd = 0; wd < size; wd++)
				_putchar('#');

			if (ht == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
