#include "main.h"
/**
 * get_bit - gets bit at the given index.
 * @n: number.
 * @index: index.
 * Return: bit or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num, size_ulong = sizeof(n) * 8;
	unsigned int size = 0;
	unsigned long int i = 1;

	if (n == 0 && index == 0)
		return (0);
	else if (n == 0 && index != 0)
		return (-1);
	while (n >= i && size_ulong > size)
	{
		size++;
		i *= 2;
	}
	if (index <= size - 1)
		return ((n >> index) & 1);
	else
		return (-1);
}
