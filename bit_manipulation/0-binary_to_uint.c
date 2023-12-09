#include <string.h>
#include <stdlib.h>
/**
 * binary_to_uint - converts binary to integer.
 * @b: binary.
 * Return: converted integer.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int prod = 1, num = 0;
	int len, i = 0;

	if (b == NULL)
		return (0);
	len = strlen(b) - 1;
	while (i <= len)
	{
		if (b[len - i] < '0' || b[len - i] > '9')
			return (0);
		num += ((int)b[len - i] - 48) * prod;
		prod *= 2;
		i++;
	}
	return (num);
}
