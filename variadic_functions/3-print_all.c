#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a char
 * @args: argument list
 */
static void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an integer
 * @args: argument list
 */
static void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: argument list
 */
static void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: argument list
 */
static void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j;
	char *separator = "";
	va_list args;

	/**
 	* struct printer - structure that matches format symbols
 	* @symbol: the format specifier character
 	* @f: function pointer that prints the argument
 	*/
	struct printer
	{
		char symbol;
		void (*print)(va_list);
	};

	struct printer printers[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == printers[j].symbol)
			{
				printf("%s", separator);
				printers[j].print(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
