#include "main.h"
#include <math.h>
/**
 * set_bit - sets bit to 1 at the given index.
 * @n: number.
 * @index: index.
 * Return: 1 or -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size_ulong = sizeof(n) * 8;

	if (index < size_ulong)
	{
		if ((n >> index) & 1 == 0)
			n = n + pow(2, index);
		return (1);
	}
	else
		return (-1);
}
