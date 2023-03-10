#include "main.h"

int is_prime(int n, int i);

/**
 * is_prime_number - a function that returns 1
 * if the input integer is a prime number, o
 * @n: number
 * Return: return 1 if true or 0 if false
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n - 1));
}

/**
 * is_prime - calculates if a number is prime recursively
 * @num: number
 * @i: iterate
 * Return:  return 1 if true or 0 if false
 */

int is_prime(int num, int i)
{
	if (i == 1)
		return (1);
	if (num % i == 0 && i > 0)
		return (0);
	return (is_prime(num, i - 1));
}
