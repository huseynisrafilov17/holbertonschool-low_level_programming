#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long int a, max, remainder, i;
	
	a = 612852475143;
	max = 0;
	for (i = 1; i <= 612852475143; i++)
	{
		if (a % i == 0)
		{
			remainder = a / i;
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
	printf("%d\n", max);
	return (0);
}
