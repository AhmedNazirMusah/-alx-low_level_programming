#include <stdio.h>

/**
 * print_array - is a function
 * @a: is  an argument
 * @n: is an argument
 * Description: Numbers must be separated by comma and space.
 * Return: void
 */

void print_array(int *a, int n)
{
	int indexArr;

	indexArr = 0;
	while (n > 0)
	{
		printf("%d", a[indexArr]);
		n--;
		if (n > 0)
		{
			printf(", ");
		}
		indexArr++;
	}
	printf("\n");
}
