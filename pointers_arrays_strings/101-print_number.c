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
	for (; divider >= 1; divider /= 10)
	{
		_putchar((a / divider) + '0');
		a = a % divider;
	}
}
