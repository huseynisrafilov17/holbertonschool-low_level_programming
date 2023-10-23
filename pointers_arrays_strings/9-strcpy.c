#include "main.h"
#include <string.h>
/**
 * _strcpy - copies string.
 * @dest: destination char.
 * @src: source string.
 * Return: char.
 */
char *_strcpy(char *dest, char *src)
{
	int length;
	length = strlen(src);
	while (length > 0)
	{
		*(dest + length) = *(src + length);
		length--;
	}
	return (dest);
}
