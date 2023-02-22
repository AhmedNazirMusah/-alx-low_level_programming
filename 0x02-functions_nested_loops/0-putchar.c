#include "main.h"
/**
 * main - starting point of a code
 * Description: a program that print's _putchar
 * Return: 0
 */

int main(void)
{
	char p [] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;
	int sizep;

	sizep = sizeof(p);
	for (i = 0; i < sizep; i++)
	{
		char store = p[i];

		_putchar(store);
	}
	_putchar('\n');
	return (0);
}
