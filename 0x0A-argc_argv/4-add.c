#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - Entry point of the program.
 *
 * This function adds positive numbers and prints the result.
 *
 * @argc: The number of arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	bool error = false;

	for (int i = 1; i < argc; i++)
	{
	char *arg = argv[i];

	for (int j = 0; arg[j] != '\0'; j++)
	{
		if (arg[j] < '0' || arg[j] > '9')
		{
			error = true;
			break;
		}
	}

	if (error)
	{
		printf("Error\n");
		return (1);
	}

	int num = atoi(arg);

	if (num > 0)
		{
		sum += num;
		}
	}

	if (argc == 1)
		{
		printf("0\n");
		}
	else

	printf("%d\n", sum);


	return (0);
}

