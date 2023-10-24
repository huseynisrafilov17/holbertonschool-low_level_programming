#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: destination.
 * @src: source.
 * Return: char pointer.
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*(src - 1) != '\0')
	{
		*dest = *src;
		src++;
	}
	return (dest);
}
