#include <stdlib.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: from this string.
 * @accept: string to find.
 * Return: pointer.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
		i++;
	}
	return (NULL);
}
