#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
    int *pArr;
    int i, size;

    if (min > max)
        return (NULL);

    size = max - min + 1;

    pArr = malloc(sizeof(int) * size);
    if (pArr == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        pArr[i] = min + i;

    return (pArr);
}
