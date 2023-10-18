#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long a, b, s, d;

	a = 1;
	b = 2;
	s = 0;
	d = 2;
	while (s < 4000000)
	{
		s = a + b;
		a = b;
		b = s;
		if (s % 2 == 0)
		{
			d = d + s;
		}
	}
	printf("%ld\n", d);
	return (0);
}
