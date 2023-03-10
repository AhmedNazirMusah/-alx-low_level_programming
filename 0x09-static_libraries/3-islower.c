#include "main.h"

/**
 * _islower - starting point
 * Description: a function that checks for lowercase characters
 * @c: an argument of _islower
 * Return: 0 if false and. 1 c==alphabet
 */

int _islower(int c)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (c == alphabet)
		{
			return (1);
		}
		alphabet++;
	}
	return (0);
}
