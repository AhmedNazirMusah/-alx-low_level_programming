#include "main.h"

/**
 * print_alphabet_x10 - starting point
 * @void: no argument
 * Description: a function that prints 10 times the alphabet
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0; i < 10; i++)
	{
		alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar (alphabet);
			alphabet++;
		}
		_putchar ('\n');
	}
}
