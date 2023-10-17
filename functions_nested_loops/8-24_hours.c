#include "main.h"
/*
 * jack_bauer - prints every minute of the day.
 * Return: void.
 */
void jack_bauer(void)
{
	int i = 0, j = 0, k = 0, m = 0;

	for (i = 48; i < 51; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i == 50 && j == 52)
			{
				break;
			}
			for (k = 48; k < 54; k++)
			{
				for (m = 48; m < 58; m++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(m);
					_putchar('\n');
				}
			}
		}
	}
}
