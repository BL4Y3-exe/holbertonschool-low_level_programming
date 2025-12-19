#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int a, b;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    if (argc == 3)
    {
        printf("%d\n", a * b);
        return (0);
    }

    printf("Error\n");

	return (1);
}
