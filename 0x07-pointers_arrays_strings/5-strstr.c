#include "main.h"

/**
 * *_strstr - a function that locates a substring
 * @haystack: is the main C string to be scanned
 * @needle: is the small string to be searched with-in haystack string
 * Return: '\0'
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
