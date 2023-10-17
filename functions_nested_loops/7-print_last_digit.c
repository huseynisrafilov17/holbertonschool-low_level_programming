#include "main.h"

int print_last_digit(int a)
{
	if (a < 0)
	{
		a = -1*a;
	}
	int b = a % 10;
	_putchar(b + '0');
	return (b);
}
