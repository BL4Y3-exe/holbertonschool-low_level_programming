#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
* struct printer - structure that matches format symbols
* @symbol: the format specifier character
* @print: function pointer that prints the argument
*/
struct printer
{
	char symbol;
	void (*print)(va_list);
};

#endif
