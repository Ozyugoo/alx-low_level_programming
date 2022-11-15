#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to input destination
 * @src: pointer to source input
 *
 * Return: pointer to string result
 */

char *_strcat(char *dest, char *src)
{
	int c, d;

	c = 0;

	while (dest[c])
		c++;

	for (d = 0; src[d]; d++)
		dest[c++] = src[d];

	return (dest);
}
