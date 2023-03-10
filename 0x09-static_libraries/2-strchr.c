#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 * @s: is a pointer to the string to be searche
 * @c: the variable to be located
 * Return: s + i
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
