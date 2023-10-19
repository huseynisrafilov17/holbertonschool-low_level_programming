#include "main.h"
/**
 * print_diagonal -  draws a diagonal line in the terminal.
 * @n: int.
 * Return: void.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (j != i)
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
