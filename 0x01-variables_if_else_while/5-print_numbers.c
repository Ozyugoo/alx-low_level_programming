#include <stdio.h>

/**
 * main - Output
 * prints all single digit numbers of based 10
 *
 *Return: Always 0
 */

int main(void)
{
	int num

	for (num = '0'; num < '10'; num++)
		printf('%d', num);

	printf('\n')

	return (0);
}