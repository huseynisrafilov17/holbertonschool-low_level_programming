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
	int j, i;

	j = 0;
	i = 0;
	while (j < n)
	{
		if (*(src + j) != '\0')
		{
			*(dest + j) = *(src + j);
			j++;
		}
		else
		{
			*(dest + j + i) = 0;
			i++;
		}
	}
	return (dest);
}
