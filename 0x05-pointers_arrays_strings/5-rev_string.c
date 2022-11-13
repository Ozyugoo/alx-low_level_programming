#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
char str = s[0];
int count = 0;
int j;

while
(s[count] != '\0')
count++;
for (j = 0; j < count; j++)
{
count--;
str = s[j];
s[j] = s[count];
s[count] = str;
}
}
