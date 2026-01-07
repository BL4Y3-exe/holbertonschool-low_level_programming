#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

void print_float(va_list args);
{
	printf("%f", va_arg(args, double));
}

void print_string(va_list args);
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

void print_all(const char * const format, ...)
{
	unsigned int i = 0; j;
	char *separator = "";
	va_list args;

	typedef struct printer
	{
		char symbol;
		void (*print)(va_list);
	} printer_t;

	printer_t printers[] = {
        {'c', prin_char},
        {'i', print_int},
        {'f', print_float},
        {'s', print_string}
    };

    va_start(args, format);

    while (format && format[i])
    {
        j = 0;
        while (j < 4)
        {
            if (format[i] == pritners[j])
            {
                printf("%s", separator);
                printers[j].print(args);
                separator = ", ";
            }
            j++
        }
        i++
    }

    va_end(args);
    printf("\n");
}