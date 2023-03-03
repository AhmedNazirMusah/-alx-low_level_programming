#include "main.h"

/**
 * leet - is a function
 * @a: is an argument
 * Description: a function that encodes a string into 1337.
 * Return: a
 */

char *leet(char *a)
{
	int i = 0, j;
	char leetStr[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (a[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (a[i] == leetStr[j] ||
			    a[i] - 32 == leetStr[j])
				a[i] = j + '0';
		}

		i++;
	}

	return (a);
}
