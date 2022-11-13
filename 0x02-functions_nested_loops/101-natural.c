#include <stdio.h>

/**
 * main - compute and print the sum of all the natural numbers that are
 *      below 1024 and are multiples of 3 or 5,
 *
 * Return: Always 0.
 */

int main(void)
{
int num, sum = 0;

for (num = 0; num < 1024; num++)
{
if ((num % 3) == 0 || (num % 5) == 0)
sum += num;
}
printf("%d\n", sum);
return (0);
}
