
#include "main.h"

/**
 * _strncat - is a function
 * @dest: ia an argument
 * @src: is an argument
 * @n: is an argument
 * Description: a function that concatenates two strings
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int lenOfDest = 0;

	while (dest[i++])
		lenOfDest++;
	for (i = 0; src[i]; i++)
	{
		if (i < n)
		{
			dest[lenOfDest++] = src[i];
		}
	}
	return (dest);
}
