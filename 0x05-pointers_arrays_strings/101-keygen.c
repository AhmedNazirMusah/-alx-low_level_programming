#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/**
 * main - starting point of a program
 * Description: a program to generate password
 * Return: (0);
 */

int main(void)
{
	int sum;
	char pass;

	srand(time(NULL));
	while (sum <= 2645)
	{
		pass = rand() % 128;
		sum += pass;
		putchar(pass);
	}
	putchar(2772 - sum);
	return (0);
}
