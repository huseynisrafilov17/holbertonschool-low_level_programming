#include <stdio.h>
#include <stdlib.h>
/**
 * isint - check if it is int.
 * @s: string.
 * Return: 0 or 1.
 */
int isint(char *s)
{
	if ((*s >= '0' && *s <= '9') || *s == '-')
	{
		return (isint(s + 1));
	}
	else if (*s == '\0')
	{
		return (1);
	}
	return (0);
}
/**
 * main - Main entry point
 * @argc: int.
 * @argv: char arr.
 * Return: count.
 */
int main(int argc, char *argv[])
{
	int cents, a = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
		{
			a = a + 1;
			cents = cents - 25;
		}
		else if (cents >= 10)
		{
			a = a + 1;
			cents = cents - 10;
		}
		else if (cents >= 5)
		{
			a = a + 1;
			cents = cents - 5;
		}
		else if (cents >= 2)
		{
			a = a + 1;
			cents = cents - 2;
		}
		else if (cents >= 1)
		{
			a = a + 1;
			cents = cents - 1;
		}
	}
	printf("%d\n", a);
	return (0);
}
