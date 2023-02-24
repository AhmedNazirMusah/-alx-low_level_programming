#include "main.h"

/**
 * print_most_numbers - a function that print numbers excluding 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int number;

	number = 0;
	while (number <= 9)
	{
		if (number != 2 && number != 4)
		{
			_putchar(number + '0');
		}
		number++;
	}
	_putchar('\n');
}
