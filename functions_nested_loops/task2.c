#include <stdio.h>
int main(void)
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
					putchar(i);
					putchar(j);
					putchar(':');
					putchar(k);
					putchar(m);
					putchar('\n');
				}
			}
		}
	}
	return (0);
}
