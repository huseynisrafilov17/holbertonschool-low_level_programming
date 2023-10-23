#include "main.h"
/**
 * _puts - puts.
 * @str: char.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
