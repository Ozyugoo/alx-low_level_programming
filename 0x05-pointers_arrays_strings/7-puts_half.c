#include "main.h"

/**
 * puts_half - function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: string
 *
 * Return: half of input
 */

void puts_half(char *str)
{
int j, k, num;

num = 0;

for (j = 0; str[j] != '\0'; j++)
num++;

k = (num / 2);

if ((num % 2) == 1)
k = ((num + 1) / 2);

for (j = k; str[j] != '\0'; j++)
_putchar(str[j]);
_putchar('\n');
}
