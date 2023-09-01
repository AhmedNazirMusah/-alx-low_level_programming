#include "main.h"

/**
 * _isupper - a function used in checking uppercase character
 * @c: argument in _isupper
 * Return: return 1 when condition is meet
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	return (0);
}
