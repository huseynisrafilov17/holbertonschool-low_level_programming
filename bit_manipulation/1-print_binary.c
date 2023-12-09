#include "main.h"
/**
 * print_binary - prints number in binary.
 * @n: number.
 */
void print_binary(unsigned long int n)
{
	int num, size = 0, j, size_ulong = sizeof(n) * 8;
	unsigned long int i = 1;

	if (n == 0)
	{
		_putchar('0');
	}
	while (n >= i && size_ulong > size)
	{
		size++;
		i *= 2;
	}
	for (j = size - 1; j >= 0; j--)
	{
		num = n >> j;
		_putchar((num & 1) + '0');
	}
}
