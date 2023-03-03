#include "main.h"

/**
 * _strcat - is a function
 * @dest: ia an argument
 * @src: is an argument
 * Description: a function that concatenates two strings
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int lenOfDest = 0;

	while (dest[i++])
		lenOfDest++;
	for (i = 0; src[i]; i++)
		dest[lenOfDest++] = src[i];
	return (dest);
}
