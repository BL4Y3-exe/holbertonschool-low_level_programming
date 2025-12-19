#include "main.h"

/**
 * helper - checks if n is prime recursively
 * @n: number
 * @d: current divisor
 *
 * Return: 1 if prime 0 otherwise
 */
int helper(int n, int d)
{
	if (d * d > n)
		return (1);

	if (n % d == 0)
		return (0);

	return (helper(n, d + 1));
}

/**
 * is_prime_number - returns 1 if n is a prime number, otherwise 0
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (helper(n, 2));
}
