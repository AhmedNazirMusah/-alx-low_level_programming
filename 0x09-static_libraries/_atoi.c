#include "main.h"

/**
 * _atoi - a function
 * @s: an argument
 *Return: an integer
 */

int _atoi(char *s)
{
	int checkSign = 1;
	unsigned int num = 0;

	do {

		if (*s == '-')
			checkSign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	} while (*s++);

	return (num * checkSign);
}
