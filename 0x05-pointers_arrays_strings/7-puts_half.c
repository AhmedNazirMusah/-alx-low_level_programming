#include "main.h"

/**
 * puts_half - is a function
 * @str: is an argument of function puts_half
 * Description: a function that prints half ofa string
 * Return: void
 */

void puts_half(char *str)
{
	int lenOfStr;

	for (lenOfStr = 0; str[lenOfStr] != '\0'; lenOfStr++)
		;
	lenOfStr++;
	for (lenOfStr /= 2; str[lenOfStr] != '\0'; lenOfStr++)
	{
		_putchar(str[lenOfStr]);
	}
	_putchar('\n');
}
