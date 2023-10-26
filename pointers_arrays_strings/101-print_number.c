#include "main.h"
/**
 * print_number - prints an integer.
 * @n: integer.
 */
void print_number(int n)
{
	unsigned int a;
	int divider = 1;

	if (n < 0)
	{
		_putchar('-');
		a = -1 * n;
	}
	else
	{
		a = n;
	}
	while ((a / divider) / 10 != 0)
	{
		divider = divider * 10;
	}
	for (; i >= 1; i /= 10)
	{
		_putchar((a / i) + '0');
		a = a % i;
	}
}
