#include "main.h"
/**
 * _puts_recursion -  prints a string, followed by a new line.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(*s);
	s++;
	if (*s != '\0')
		_puts_recursion(s);
	else
		_putchar('\n');
}
