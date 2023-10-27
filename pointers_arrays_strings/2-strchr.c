#include <stdlib.h>
/**
 * _strchr -  locates a character in a string.
 * @s: string.
 * @c: character to be located.
 * Return: either pointer or NULL.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != c && *(s + i) != '\0')
	{
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}
