#include "main.h"

/**
 * *_strcpy - a function
 * @dest: an argument
 * @src: an argument
 * Description: Write a function that copies the string pointed
 * to by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int j = -1;

	do {
		j++;
		dest[j] = src[j];
	} while (src[j] != '\0');

	return (dest);
}
