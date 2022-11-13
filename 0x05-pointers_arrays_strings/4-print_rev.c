#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a newline
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
int str = 0;
int j;

while
(*s != '\0')
{
str++;
s++;
}
s--;
for (j = str; j > 0; j--)
{
_putchar(*s);
s--;
}

_putchar('\n');
}
