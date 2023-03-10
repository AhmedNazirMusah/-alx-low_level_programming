#include "main.h"

int is_sqrt_recursion(int n, int m);

/**
 *_sqrt_recursion - the natural square root of a number
 *@n: square root number
 *Return: root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * is_sqrt_recursion - the natural square
 * @n: square root num
 * @r: iterator
 * Return: the square root
 */

int is_sqrt_recursion(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (actual_sqrt_recursion(n, r + 1));
}
