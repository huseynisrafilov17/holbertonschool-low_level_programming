#include "main.h"
/**
 * puts2 - prints every other character of a string.
 * @str: char.
 */
void puts2(char *str)
{
	int c = 0;

	while (*str != '\0')
	{
		if (c % 2 == 0)
		{
		_putchar(*str);
		}
		str++;
		c++;
	}
	_putchar('\n');
}
