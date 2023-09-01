#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This function prints all the arguments received, one argument per line.
 *
 * @argc: The number of arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		{
		printf("%s\n", argv[i]);
		}

	return (0);
}

