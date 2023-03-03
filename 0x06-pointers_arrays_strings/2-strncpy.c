#include "main.h"

/**
 * _strncpy - is a function
 * @dest: an argument
 * @src: an argument
 * @n: an argument
 * Description: a function that copies a string
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, lenOfSrc = 0;

	while (src[i++])
		lenOfSrc++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = lenOfSrc; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
