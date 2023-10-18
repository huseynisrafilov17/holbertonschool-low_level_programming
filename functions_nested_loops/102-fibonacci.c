#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long a, b, s;
	int c;

	a = 1;
	b = 2;
	c = 3;
	printf("%ld, %ld", a, b);
	while (c < 51)
	{
		s = a + b;
		a = b;
		b = s;
		c++;
		printf(", %ld", s);
	}
	printf("\n");
}
