#include "main.h"

/**
 * rev_string - a function
 * @s: an argument of the function rev_string
 * Description: reverse
 * Return: void
 */

void rev_string(char *s)
{
	int lenOfStr, i;
	char temp;

	lenOfStr = 0;
	while (s[lenOfStr])
	{
		lenOfStr++;
	}
	for (i = 0; i < lenOfStr; i++)
	{
		lenOfStr--;
		temp = s[i];
		s[i] = s[lenOfStr];
		s[lenOfStr] = temp;
	}
}
