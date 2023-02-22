#include "main.h"

/**
 * _abs - function
 * @n: argument of function _abs
 * Description: a function to compute the absolute value of integer
 * Return: 0
 */

int _abs(int n)
{
	int absa;

	absa = -1;
	if (n < 0)
	{
		absa = absa * n;
		return (absa);
	}
	else
	{
		return (n);
	}
	return (0);
}
