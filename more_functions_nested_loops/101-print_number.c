#include "main.h"
/**
 * print_number - prints an integer.
 * @n: int.
 * Return: void.
 */

void print_number(int n)
{
	unsigned int i = 10;

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	while (n / i != 0 || i < INT_MAX/10)
	{
		i = i * 10;
	}
	if (i < INT_MAX/10)
		continue;
	else
		i = i / 10;
	for (; i != 1; i /= 10)
	{
		_putchar((n / i) + '0');
		n = n % i;
	}
	_putchar((n % 10) + '0');
}
