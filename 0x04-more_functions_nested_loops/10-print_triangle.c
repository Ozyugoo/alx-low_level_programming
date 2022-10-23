#include "main.h"

/**
 * print_triangle - Output
 * Using # to print a triangle
 * @size: The size of the triangle
 */

void print_triangle(int size)
{
	int draw, trig;

	if (size > 0)
	{
		for (draw = 1; draw <= size; draw++)
		{
			for (trig = size - draw; trig > 0; trig--)
				_putchar(' ');

			for (trig = 0; trig < draw; trig++)
				_putchar('#');

			if (draw == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
