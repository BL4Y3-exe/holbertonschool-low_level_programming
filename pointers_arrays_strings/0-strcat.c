#include "main.h"
/**
* _strcat - concerates two strings
* @dest: destination
* @src: source
*
* Return: dest*/
char *_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    
    while (src[j] != '\0')
    {
        dest[i] = srt[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return (dest);
}