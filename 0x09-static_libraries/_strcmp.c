#include "main.h"

/**
 * _strcmp - is a function
 * @s1: an argument
 * @s2: an argument
 * Description: a function that compares two strings
 * Return: *s1-*s2
 */

int _strcmp(char *s1, char *s2)
{
	do {
		s1++;
		s2++;
	}
	while ((*s1 && *s2) && (*s1 == *s2))
		;

	return (*s1 - *s2);
}
