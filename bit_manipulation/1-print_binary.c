#include "main.h"
#include <limits.h>
/**
 * print_binary - prints number in binary
 * @n: number.
 */
void print_binary(unsigned long int n)
{
	int num, size = 0, j;
	unsigned long int i = 1;

	if (n == 0)
	{
		_putchar('0');
	}
	while (n >= i)
	{
		size++;
		if (i * 2 <= ULONG_MAX)
			i *= 2;
		else
			break;
	}
	for (j = size - 1; j >= 0; j--)
	{
		num = n >> j;
		_putchar((num & 1) + '0');
	}
}
