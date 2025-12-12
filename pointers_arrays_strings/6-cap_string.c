#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 *
 * Return: resulting string
 */
char *cap_string(char *s)
{
	int i = 0;
	int cap_next = 1;
	char sep[] = " \t\n,;.!?\"(){}";
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (s[i] == sep[j])
			{
				cap_next = 1;
				break;
			}
			j++;
		}

		if (cap_next && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
			cap_next = 0;
		}
		else if (!(s[i] == sep[j]))
		{
			cap_next = 0;
		}
		i++;
	}

	return (s);
}
