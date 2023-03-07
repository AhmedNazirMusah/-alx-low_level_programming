#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - is a function that prints the sum of two
 * diagonals of a square matrix of integers
 * @a: integer matrix to be added
 * @size: matrix size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sumOne = 0, sumTwo = 0;

	for (i = 0; i < size; i++)
	{
		sumOne += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sumTwo += a[i];
		a -= size;
	}

	printf("%i, %i\n", sumOne, sumTwo);
}
