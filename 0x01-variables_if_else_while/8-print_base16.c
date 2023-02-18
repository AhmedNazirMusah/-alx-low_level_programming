#include <stdio.h>

/**
 * main - starting point of a program
 * Description: outputting hexadecimal
 * Return: 0
 */

int main(void)
{
	int num;
	char hex_letter;

	num = 0;
	hex_letter = 'a';
	for (num = 0; num < 17; num++)
	{
		if (num < 10)
		{
			putchar(num + '0');
		}
		else if (num > 10)
		{
			putchar(hex_letter);
			hex_letter++;
		}
	}
	putchar('\n');
	return (0);
}
