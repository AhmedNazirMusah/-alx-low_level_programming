#include "main.h"

/**
 * _pow_recursion - a function that returns the x to the power y
 * @x: number
 * @y: the power.
 * Return: x to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
