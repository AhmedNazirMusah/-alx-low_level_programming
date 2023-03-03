#include "main.h"

/**
 * print_number - a function
 * @n: an argument.
 * Return: void
 */

void print_number(int n)
{
	unsigned int str_n = n;

	if (n < 0)
	{
		_putchar('-');
		str_n = -str_n;
	}

	if ((str_n / 10) > 0)
		print_number(str_n / 10);

	_putchar((str_n % 10) + '0');
}
