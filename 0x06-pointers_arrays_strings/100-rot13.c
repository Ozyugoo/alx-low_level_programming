#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13.
 * @n: pointer to string
 *
 * Return: returns *n
 */

char *rot13(char *n)
{
	int b;
	int d;
	char print[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char printrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (b = 0; n[b] != '\0'; b++)
	{
		for (d = 0; d < 52; d++)
		{
			if (n[b] == print[d])
			{
				n[b] = printrot[d];
					break;
			}
		}
	}

	return (n);
}
