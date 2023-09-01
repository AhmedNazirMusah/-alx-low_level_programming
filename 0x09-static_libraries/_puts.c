#include "main.h"

/**
 * _puts - is a function
 * @str: is an argument of _puts function
 * Description: a function that prints a string to stdout
 * Return: void
 */

void _puts(char *str)
{
	int lenOfStr;

	lenOfStr = 0;
	while (str[lenOfStr])
	{
		_putchar(str[lenOfStr]);
		lenOfStr++;
	}
	_putchar('\n');
}
