#include "main.h"

/**
 * _sqrt_recursion - prints the square root of natural numbers
 * @n: the number to find its square root
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
sqrt(n);
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - find the square root of natural number
 * @n: the number to find its square root
 * Return: the square root of n
 */

int actual_sqrt_recursion(int n)
{
int r;

if (r * r > n)
return (-1);
if (r * r == n)
return (1);
return (actual_sqrt_recursion(n, r + 1));
}
