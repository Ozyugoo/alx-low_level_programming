#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point generates a random password
 *
 * Return: the generated password
 */

int main(void)
{
char a;
int n;

srand(time(0));
while
(n <= 2645)
{
a = rand() % 128;
n += a;
putchar(a);
}
putchar(2772 - n);
return (0);
}
