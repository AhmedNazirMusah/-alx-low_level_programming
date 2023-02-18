#include <stdio.h>

/**
 * main - entry point
 * Description: a program to print alphabets
 * Return: 0
 */

int main(void)
{
	int alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	alphabet = 'A';
	while (alphabet <= 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
