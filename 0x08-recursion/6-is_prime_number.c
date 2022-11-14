#include "main.h"

int is_prime(int n, int num);

/**
 * is_prime_number - tells if the given number is prime
 *@n: the number to check
 *
 * *Return: 1 if the number is prime
 */

int is_prime_number(int n)
{
int num = n / 2;

if (n <= 1)
return (0);
return (is_prime(n, num));
}

/**
 * is_prime - returns the 1 if n is prime
 * @n: number to be checked
 * @num: number to start checking from
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime(int n, int num)
{
if (num <= 1)
return (1);
else if (n % num == 0)
return (0);
return (is_prime(n, num - 1));
}
