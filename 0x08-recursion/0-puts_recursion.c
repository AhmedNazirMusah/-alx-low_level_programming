#include "main.h"

/**
 * _puts_recursion - a funcion that prints a string
 * @s: output
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
