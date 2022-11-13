#include <stdio.h>

/**
 *main - prints out first 98 fibonacci numbers starting from 1 and 2
 *
 * Return: return 0
 */

int main(void)
{
int fib;
unsigned long j1 = 0, j2 = 1, j3;
unsigned long j1_k1, j1_k2, j2_k1, j2_k2;
unsigned long k1, k2;

for (fib = 0; fib < 92; fib++)
{
j3 = j1 + j2;
printf("%lu, ", j3);
j1 = j2;
j2 = j3;
}
j1_k1 = j1 / 10000000000;
j2_k1 = j2 / 10000000000;
j1_k2 = j1 % 10000000000;
j2_k2 = j2 % 10000000000;
for (fib = 93; fib < 99; fib++)
{
k1 = j1_k1 + j2_k1;
k2 = j1_k2 + j2_k2;
if ((j1_k2 + j2_k2) > 9999999999)
{
k1 += 1;
k2 %= 10000000000;
}
printf("%lu%lu", k1, k2);
if (fib != 98)
printf(", ");

j1_k1 = j2_k1;
j1_k2 = j2_k2;
j2_k1 = k1;
j2_k2 = k2;
}
printf("\n");
return (0);
}
