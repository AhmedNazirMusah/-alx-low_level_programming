#include "main.h"

/**
 * print_chessboard - is a function that prints the chessboard
 * @a: the array pointer to be printed
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row <= 7; row++)
	{
		for (col = 0; col <= 7; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
