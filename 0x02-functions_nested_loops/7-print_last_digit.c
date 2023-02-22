#include "main.h"

/**
 * print_last_digit - function
 * @n: argument for print_last_digit
 * Description:  There are only 3 colors, 10 digits, and 7 notes
 * Return: 0
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (n < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
