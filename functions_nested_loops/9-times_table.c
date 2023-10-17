#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: void.
 */
void times_table(void)
{
	int i, j, a, r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			a = i * j;
			if (a / 10 != 0)
			{
				r = a % 10;
				a = a / 10;
				_putchar(a + '0');
				_putchar(r + '0');
			}
			else
			{
				_putchar(a + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
