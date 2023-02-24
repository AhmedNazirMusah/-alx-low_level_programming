#include "main.h"

/**
 * print_square - prints squares
 * @size: variable
 * Return: 0
 */

void print_square(int size)
{
	int i = 0, shape;

	while (i < size && size > 0)
	{
		shape = 0;
		while (shape < size)
		{
			_putchar('#');
			shape++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
