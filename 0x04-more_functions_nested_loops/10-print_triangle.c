#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size : argument variable
 * Return:void
 */

void print_triangle(int size)
{
	int i, cs;

	i = 1;
	while (i <= size && size > 0)
	{
		cs = 0;
		while (cs < size - i)
		{
			_putchar(' ');
			cs++;
		}
		cs = 0;
		while (cs < i)
		{
			_putchar('#');
			cs++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
