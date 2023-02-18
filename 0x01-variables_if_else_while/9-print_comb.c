#include <stdio.h>

/**
 * main - starting point of a program
 * Description: printing the possible combinations of single-digit numbers.
 * Return: 0
 */

int main(void)
{
	int num;

	num = 0;
	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
