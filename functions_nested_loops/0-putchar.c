#include <unistd.h>

/**
 * main - Prints the string "_putchar"
 *
 * Return: 0
 */
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
