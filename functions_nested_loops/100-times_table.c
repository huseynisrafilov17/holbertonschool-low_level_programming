#include "main.h"

void print_times_table(int n);
{
	if (n < 15 && n > 0)
	{
		int i, j, a, r, b;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				a = i * j;
				if (j > 0 && a >= 100)
				{
					_putchar(',');
					_putchar(' ');
				}
				else if (j > 0 && a >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else if (j > 0 && a < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				if (a >= 100)
				{
					r = a % 10;
					b = a / 10;
					_putchar((a / 100) + '0');
					_putchar(b + '0');
					_putchar(r + '0');
				}
				else if (a >= 10)
				{
					r = a % 10;
					b = a / 10;
					_putchar(b + '0');
					_putchar(r + '0');
				}
				else
				{
					_putchar(a + '0');
				}
			}
		}
	}
}
