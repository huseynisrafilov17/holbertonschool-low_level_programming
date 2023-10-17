#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: void.
 */
void times_table(void)
{
	int i, j, a;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			a = i * j;
			_putchar(a);
			if (j < 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
