#include "main.h"
/**
 * _strcpy - copies string.
 * @dest: destination char.
 * @src: source string.
 * Return: char.
 */
char *_strcpy(char *dest, char *src)
{
	while (*(src - 1) != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
