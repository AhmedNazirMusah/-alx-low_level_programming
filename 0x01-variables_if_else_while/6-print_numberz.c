#include <stdio.h>

/**
 * main - starting point
 * Description: printing number using putchar
 * Return: 0
 */

int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
