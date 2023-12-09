#include "main.h"
/**
 * print_binary: prints number in binary
 * @n - number.
 */
void print_binary(unsigned long int n)
{
	int i = 1, num, size = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	while (n > i)
	{
		size++;
		i *= 2;
	}
	for (i = size - 1; i >= 0; i--)
	{
		num = n >> i;
		_putchar((num & 1)+ '0');
	}
}
