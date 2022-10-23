#include "main.h"

/**
 * print_alphabet - Output
 * prints alphabet in lowercase using _putchar
 */

void print_alphabet(void)
{
	int write;

	for (write = 'a'; write <= 'z'; write++)
		_putchar(write);

	_putchar('\n');
}
