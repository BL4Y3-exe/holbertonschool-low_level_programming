#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to print from
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
		len++;

	i = (len % 2 == 0) ? (len / 2) : ((len + 1) / 2);

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
