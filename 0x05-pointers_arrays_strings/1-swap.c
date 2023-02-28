#include "main.h"

/**
 * swap_int - this a function with two arguments
 * @a: this is the first argument of the function
 * @b: this is the second argument of the function
 * Description: a function that swaps the values of two integers
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
