#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a, max, remainder, i;

	a = 612852475143;
	max = 0;
	for (i = 1; i <= 612852475143; i++)
	{
		if (a % i == 0)
		{
			remainder = a / i;
			a = remainder;
			if (max < i)
			{
				max = i;
			}
		}
		if (remainder == 1)
		{
			break;
		}
	}
	printf("%lu\n", max);
	return (0);
}
