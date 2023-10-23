#include "main.h"
/**
 * _strlen: returns length of a string.
 * @s: char.
 * Return: c.
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	return (c);
}
