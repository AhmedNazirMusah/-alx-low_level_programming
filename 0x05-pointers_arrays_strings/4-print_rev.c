#include "main.h"

/**
 *  print_rev - is a function
 *  @s: is an argument of the function print_rev
 *  Description: a function that prints a string, in reverse
 *  Return: void
 */

void print_rev(char *s)
{
	int lenOfStr;

	lenOfStr = 0;
	while (s[lenOfStr])
	{
		lenOfStr++;
	}
	while (lenOfStr--)
	{
		_putchar(s[lenOfStr]);
	}
	_putchar('\n');
}
