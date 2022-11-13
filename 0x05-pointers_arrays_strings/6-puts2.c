#include "main.h"

/**
 * puts2 - prints other character of a string
 * @str: string to be printed
 */

void puts2(char *str)
{
int n = 0;
while
(str[n] != '\0')
{
if (n % 2 == 0)
_putchar(str[n]);
n++;
}

_putchar('\n');
}
