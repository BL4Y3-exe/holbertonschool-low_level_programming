#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pCalloc;
	unsigned int i;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pCalloc = malloc(nmemb * size);
	if (pCalloc == NULL)
		return (NULL);

	c = pCalloc;
	for (i = 0; i < nmemb * size; i++)
		c[i] = 0;

	return (pCalloc);
}
