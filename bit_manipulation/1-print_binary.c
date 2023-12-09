#include "main.h"
/**
 * print_binary: prints number in binary
 * @n - number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1;

	for (; (n / i) / 2 != 0; i *= 2)
		continue;
	_putchar(n / i + 48);
	for (; i >= 2; i /= 2)
		_putchar(n % i + 48);
}
