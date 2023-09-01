#include "main.h"

/**
 * *_strspn - a function that gets the length of a prefix
 * substring
 * @s: an argument
 * @accept: an argument
 * Return: num
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				num++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (num);
		}
		s++;
	}
	return (num);
}
