#include "main.h"

/**
 * puts2 - a function
 * @str: an argument of function puts2
 * Return: void
 */

void puts2(char *str)
{
	int lenOfStr;

	lenOfStr = 0;
	while (str[lenOfStr])
	{
		if (lenOfStr % 2 == 0)
		{
			_putchar(str[lenOfStr]);
		}
		lenOfStr++;
	}
	_putchar('\n');
}
