#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: string
 * Return: sum (the length of the string)
 */

int _strlen_recursion(char *s)
{
	int i = 0, sum = 0;

	if (s[i])
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
