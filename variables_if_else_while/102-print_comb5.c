#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			l = j + 1;
			for (k = i; k < 58; k++)
			{
				if (j == 58)
				{
					k = k + 1;
				}
				for (; l < 58; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i < 57 || j < 56 || k < 57 || l < 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				l = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
