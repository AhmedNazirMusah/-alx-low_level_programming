#include <stdio.h>

/**
 * main - starting point of  program
 * Description: program to reverse the alphabet
 * Return: 0
 */

int main(void)
{
	char alphabet;

	alphabet = 'z';
	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
