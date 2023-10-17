#include "main.h"

int print_last_digit(int a)
{
	int b = a % 10;
	int c = b + 48;
	_putchar(c);
	return (b);
}
