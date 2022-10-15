#include <stdio.h>

/**
 * main - Output
 * Prints the alphabeth in lowercase and uppercase
 *
 * Return: Always 0
 */

int main(void)
{
	char write;

	for(write = 'a'; write <= 'z'; write++;)
		putchar(write);

	for(write = 'A'; write <= 'Z'; write++;)
		putchar(write);
	
	putchar('\n')

	return 0;
}

	
