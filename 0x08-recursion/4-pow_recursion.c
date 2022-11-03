#include "main.h"

/**
 * _pow_recursion - prints the value of x raised to the power y
 * @x: the value to be raised
 * @y: the value raised
 * Return: the value of xraised to the power of y
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
_pow_recursion(x, y);
if (y < 0)
return (-1);
}
