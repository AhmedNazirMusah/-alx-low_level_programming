#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: argument
 * Return: void
 */

void print_diagonal(int n)
{
	int count, c_space;

	count = 0;
	while (n > 0)
	{
		c_space = count;
		while (c_space > 0)
		{
			_putchar(' ');
			c_space--;
		}
		_putchar('\\');
		_putchar('\n');
		count++;
		n--;
	}
	if (count == 0)
	{
		_putchar('\n');
	}
}
