#include "main.h"

/**
 * leet - function that encodes a string
 * @i: string to be encoded
 * Return: returns i
 */

char *leet(char *i)
{
	int b, d;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (b = 0; i[b] != '\0'; b++)
	{
		for (d = 0; d < 10; d++)
		{
			if (i[b] == s1[d])
			{
				i[b] = s2[d];
			}
		}
	}

	return (i);
}
