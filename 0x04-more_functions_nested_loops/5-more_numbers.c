#include "main.h"

/**
 * more_numbers - a function that print 10 times a number from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i, snum;
	int number;

	number = 0;
	while (number < 10)
	{
		for (i = 0; i < 15; i++)
		{
			snum = i;
			if (i > 9)
			{
				_putchar('1');
				snum = i % 10;
			}
			_putchar(snum + '0');
		}
		_putchar('\n');
		number++;
	}
}
