#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: destination.
 * @src: source.
 */
char *_strcat(char *dest, char *src)
{
	/*int c = 0;*/

	while (*dest != '\0')
	{
		dest++;
	}
	*dest = *src;
	/*while (*(src + c - 1) != '\0')
	{
		*(dest + c) = *(src + c);
		c++;
	}*/
	return (dest);
}
