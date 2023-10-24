#include <stddef.h>
/**
 * _strncpy - copies a string.
 * @dest: char.
 * @src: char.
 * @n: int.
 * Return: string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;
	j = 0;

	while (j < n && *(src + j) != '\0')
	{
		*(dest + j) = *(src + j);
		j++;
	}
	if (*(src + j) == '\0')
	{
		*(dest + j) = '\0';
		return (src);
	}
	return (dest);
}
