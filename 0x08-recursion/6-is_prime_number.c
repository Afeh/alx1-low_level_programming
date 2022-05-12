#include "main.h"

/**
 * is_prime - main - check the code
 * @a: number
 * @b: divisor to check
 * Return: Always 0
 */

int is_prime(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
		else if (a / b == 1)
	{
		return (1);
	}
	return (is_prime(a, b + 1));
}

/**
 * is_prime_number - main - check the code
 * @n: number
 *
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
