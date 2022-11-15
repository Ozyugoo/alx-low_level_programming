#include "main.h"

/**
 * _strncpy - function that copies a string
 * works exactly like strncpy
 * @dest: storing the copy of string
 * @src: source string
 * @n: number of byte copied
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int f;

	for (f = 0; f < n && src[f] != '\0'; f++)
		dest[f] = src[f];

	for ( ; f < n; f++)
		dest[f] = '\0';

	return (dest);
}
