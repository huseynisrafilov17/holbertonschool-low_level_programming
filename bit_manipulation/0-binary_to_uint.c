#include <string.h>
#include <stdlib.h>
/**
 * binary_to_uint - converts binary to integer.
 * @b: binary.
 * Return: converted integer.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, length, prod = 1, num = 0;

	if (b = NULL)
		return (0);
	length = strlen(b);
	while (i < length)
	{
		if (b[i] < '0' || b[i] > '9')
			return (0);
		num += ((int)b[i] - 48) * prod;
		prod *= 2;
		i++;
	}
	return (num);
}
