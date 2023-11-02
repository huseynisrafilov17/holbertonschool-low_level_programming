#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main entry point
 * @argc: int.
 * @argv: char arr.
 * Return: 0 or 1.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, a;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] <= 48 && *argv[i] >= 57)
		{
			break;
			return (1);
		}
		a = atoi(argv[i]);
		sum = sum + a;
	}
	printf("%d\n", sum);
	return (0);
}
