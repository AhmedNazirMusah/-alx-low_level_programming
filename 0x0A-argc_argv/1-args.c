#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This function prints the number of arguments passed into it.
 *
 * @argc: The number of arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc >= 1)
		{
		printf("%d\n", argc - 1);
		}
	else

	printf("No arguments provided.\n");

	return (0);
}

