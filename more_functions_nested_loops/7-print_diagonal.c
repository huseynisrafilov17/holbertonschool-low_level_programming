#include "main.h"
/**
 * print_line -  draws a straight line in the terminal.
 * @n: int.
 * Return: void.
 */
void print_line(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (j != i - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}
		}
		if (i < n - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
