#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to print from
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	/* Считаем длину строки */
	while (str[len] != '\0')
		len++;

	/* Если длина нечётная, начинаем с (len + 1) / 2 */
	i = (len % 2 == 0) ? (len / 2) : ((len + 1) / 2);

	/* Печатаем вторую половину */
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
