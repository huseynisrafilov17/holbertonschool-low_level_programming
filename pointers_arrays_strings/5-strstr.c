#include <stdlib.h>
/**
 * _strstr - locates a substring..
 * @haystack: from this string.
 * @needle: string to find.
 * Return: pointer.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (*(haystack + i) != '\0')
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + i + j) == *(needle + i + j))
			{
				continue;
			}
			else
			{
				break;
			}
		}
		if (*(needle + j) == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
