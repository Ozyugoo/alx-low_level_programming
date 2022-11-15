#include "main.h"

/**
 * _strncat - concatenates two strings with added number of bytes input
 * @dest: string to be appended
 * @src: string to be completed
 * @n: integer to compare with index
 * Return: new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
