#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate a random password for 101-crackme file
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int password[40], i, sum = 0, n;

	srand(time(NULL));
	for (i = 0; i < 40; i++)
	{
		password[i] = rand() % 94 + 33;
		sum+= password[i];
		putchar(password[i]);

		if (2772 - sum <= 126 && 2772 - sum > 32)
		{
			n = 2772 - sum;
			sum += n;
			putchar(n);
			break;
		}
		else if (2772 - sum <= 32)
		{
			sum = 0;
			i = -1;
		}
	}
	return (0);
}
