#include "main.h"

/**
 * helper - helper function to find square root
 * @n: number
 * @prbl: current probable value of squre root of given number
 *
 * Return: square root or -1
 */
int helper(int n, int prbl)
{
	if (prbl * prbl == n)
		return (prbl);

	if (prbl * prbl > n)
		return (-1);

	return (helper(n, prbl + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number whose square root needs to be found
 *
 * Return: natural square root or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (helper(n, 0));
}
