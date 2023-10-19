#include "main.h"
/**
 * print_triangle -  prints a triangle.
 * @size: int.
 * Return: void.
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j >= size - i)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		if (i < size - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
