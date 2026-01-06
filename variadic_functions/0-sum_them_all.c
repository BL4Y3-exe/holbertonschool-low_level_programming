#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all -  function that returns the sum of all its parameters
* @n: number of arguments
*
* Return: the sum of all parametrs
*/
int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		s += x;
	}
	va_end(args);
	return (s);
}
