#include "main.h"
/**
 * print_last_digit - checks for lowercase character.
 * @a:  int.
 * Return: int.
 */
int print_last_digit(int a)
{
	int b = a % 10;

	if (b < 0)
	{
		b = -1 * b;
	}
	_putchar(b + '0');
	return (b);
}
