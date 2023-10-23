#include "main.h"
/**
 * _strcpy - copies string.
 * @dest: destination char.
 * @src: source string.
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (*(src - 1) != '\0')
	{
		*(dest + c) = *src;
		src++;
	}
	return (dest);
}
