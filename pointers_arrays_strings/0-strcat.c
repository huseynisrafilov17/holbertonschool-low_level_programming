#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings.
 * @dest: destination.
 * @src: source.
 * Return: char pointer.
 */
char *_strcat(char *dest, char *src)
{
	int dest_length, src_length, i;

	dest_length = strlen(dest);
	src_length = strlen(src);
	i = 0;
	while (i <= src_length)
	{
		*(dest + dest_length) = *(src + i);
		dest_length++;
		i++;
	}
	return (dest);
}
