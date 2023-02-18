#include <stdio.h>

/**
 * main - starting point of a program
 * Description: a program to single print digit numbers of base 10
 * Return: 0
 */

int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
