#include "main.h"

/**
 * _strlen - is a function with a char type as argument
 * @s: is a variable
 * Description: a function that returns the length of a string
 * Return: lenOfStr
 */

int _strlen(char *s)
{
	int lenOfStr;

	lenOfStr = 0;
	while (s[lenOfStr])
	{
		lenOfStr++;
	}
	return (lenOfStr);
}
