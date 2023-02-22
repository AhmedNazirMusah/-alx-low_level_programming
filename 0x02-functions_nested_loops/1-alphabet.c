#include "main.h"

/**
 * print_alphabet - starting point
 * Description: islower function
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
