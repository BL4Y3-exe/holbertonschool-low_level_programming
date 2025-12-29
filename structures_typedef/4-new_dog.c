#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: pointer to the new dog or NULL if it fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new;
    int i, name_len, owner_len;

    if (name = NULL || owner == NULL)
        return (NULL);
    
    new = malloc(sizeof(dog_t));
    if (new == NULL)
        return (NULL);
    
    for (name_len = 0; name[name_len] != '\0'; name_len++);

    new->name = malloc(sizeof(char) * (name_len + 1));
    if (new->name == NULL)
    {
        free(new);
        return (NULL);
    }

    for (i = 0; i < name_len; i++)
        new->name[i] = name[i];
    new->name[i] = '\0';

    for (owner_len = 0; owner[owner_len] != '\0'; owner_len++);

    new->owner = malloc(sizeof(char) * (owner_len + 1));
    if (new->owner == NULL)
    {
        free(new->name);
        free(new);
        return (NULL);
    }

    for (i = 0; i < owner_len; i++)
        new->owner[i] = owner[i];
    new->owner[i] = '\0';

    new->age = age;

    return (new);
}