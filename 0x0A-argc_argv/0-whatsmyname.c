#include "main.h"
#include <stdio.h>
/**
 * main - it prints the name of the funtion and a new line.
 * @argv: array holding all the arguments passed into the function
 * @argc: size of argv[] or number of arguments
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{

		printf("%s\n", argv[0]);

	} else
		printf("Program name unavailable.\n");
	return (0);
}

