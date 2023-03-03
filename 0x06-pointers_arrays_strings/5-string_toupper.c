#include "main.h"

/**
 * string_toupper - a function
 *  @toUp: is an argument
 *  Description: a function for changing all lowercase
 *  letters of a string to uppercase
 *  Return: u
 */

char *string_toupper(char *toUp)
{
	int i;

	for (i = 0; toUp[i] != '\0'; i++)
	{
		if (toUp[i] >= 'a' && toUp[i] <= 'z')
		{
			toUp[i] -= 32;
		}
	}
	return (toUp);
}
