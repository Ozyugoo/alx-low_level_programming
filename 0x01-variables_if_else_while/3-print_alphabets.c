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
	char print;

	for(write = 'a'; write <= 'z'; write++)
		putchar(write);

	for(print = 'A'; print <= 'Z'; print++)
		putchar(print);
	
	putchar('\n');

	return 0;
}

	
