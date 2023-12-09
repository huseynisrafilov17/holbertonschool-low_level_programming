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
		putchar('0');
	}
	while (n / i != 0)
	{
		size++;
		i *= 2;
	}
	for (i = size - 1; i >= 0; i--)
	{
		num = n >> i;
		putchar((num & 1)+ '0');
	}
}
