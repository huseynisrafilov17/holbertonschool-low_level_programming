#include "main.h"
/**
 * print_rev - prints in reverse.
 * @s: char.
 */
void print_rev(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	s--;
	for (; c >= 0; c--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
