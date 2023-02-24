#include "main.h"

/**
 * print_numbers - a function that prints single digit numbers
 * Return: void
 */

void print_numbers(void)
{
	int number;

	number = 0;
	while (number <= 9)
	{
		_putchar(number + '0');
		number++;
	}
	_putchar('\n');
}
