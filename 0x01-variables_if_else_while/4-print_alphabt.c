#include <stdio.h>

/**
 * main - starting point of a program
 * Description: print all lowercase alphabets except q and e
 * Return: 0
 */

int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
