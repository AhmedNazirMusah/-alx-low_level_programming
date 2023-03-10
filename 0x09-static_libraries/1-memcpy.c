#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 * @dest: the destination array whee the content is to be copied
 * @src: is a pointer to the source of data to be copied
 * @n: is the number of bytes to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (n > 0)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	return (dest);
}
