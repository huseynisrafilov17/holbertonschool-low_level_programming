#include "main.h"
/**
 * flip_bits - returns the number of bits needed to flip to get from n to m.
 * @n: number.
 * @m: number.
 * Return: the number of bits needed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int size = 0, j, size_ulong = sizeof(n) * 8;
	unsigned int count = 0;
	unsigned long int i = 1;

	while ((n >= i || m >= i) && size_ulong > size)
	{
		size++;
		i *= 2;
	}
	for (j = size - 1; j >= 0; j--)
	{
		if (((n >> j) & 1) != ((m >> j) & 1))
			count++;
	}
	return (count);
}
