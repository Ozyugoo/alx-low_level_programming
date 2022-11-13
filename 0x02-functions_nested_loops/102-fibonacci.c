#include <stdio.h>

/**
 * main - prints the first 50 fibonacci number starting from 1 and 2
 * numbers must be separated by a comma (,) followed by a space
 *
 * Return: Always 0.
 */

int main(void)
{
int num;
unsigned long fibo1 = 0, fibo2 = 1, sum;

for (num = 0; num < 50; num++)
{
sum = fibo1 + fibo2;
printf("%lu", sum);
fibo1 = fibo2;
fibo2 = sum;

if (num == 49)
printf("\n");
else
printf(", ");
}

return (0);
}
