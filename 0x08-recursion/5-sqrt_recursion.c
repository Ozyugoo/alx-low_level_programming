#include "main.h"

int _sqrt(int n, int s);

/**
 * _sqrt_recursion - prints the square root of natural numbers
 * @n: the number to find its square root
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)
return (n);
return (_sqrt(0, n));
}

/**
 * _sqrt - returns the square root of a number
 * @n: test number
 * @s: squared number
 *
 * Return: the square root of n
 */

int _sqrt(int n, int s)
{
if (n > s / 2)
return (-1);
else if (n * n == s)
return (n);

return (_sqrt(n + 1, s));
}
