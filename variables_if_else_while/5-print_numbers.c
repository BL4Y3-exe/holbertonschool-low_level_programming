#include <stdio.h>

/**
 * main - prints all single digit numbers
 *
 * return: always 0
 */

int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		printf("%d", c);

	printf("\n");

	return (0);
}
