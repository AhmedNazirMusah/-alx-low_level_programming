#include "main.h"

/**
 * _isalpha - function
 * @c: argument of _isalpha function
 * Description: a function that checks for alphabetic character
 * Return: return 1 if c==alphabet
 */

int _isalpha(int c)
{
	char alphabet;

	alphabet = 'A';

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
