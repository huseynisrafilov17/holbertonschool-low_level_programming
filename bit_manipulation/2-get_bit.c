#include "main.h"
/**
 * get_bit - gets bit at the given index.
 * @n: number.
 * @index: index.
 * Return: bit or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size_ulong = sizeof(n) * 8;

	if (index < size_ulong)
		return ((n >> index) & 1);
	else
		return (-1);
}
