#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string.
 */
void _print_rev_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
}
