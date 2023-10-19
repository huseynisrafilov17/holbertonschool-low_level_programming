#include "main.h"
/**
 * print_diagonal -  draws a diagonal line in the terminal.
 * @n: int.
 * Return: void.
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		if (i < size - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
