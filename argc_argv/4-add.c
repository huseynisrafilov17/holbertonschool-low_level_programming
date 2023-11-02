#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Main entry point
 * @argc: int.
 * @argv: char arr.
 * Return: 0 or 1.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, a, check;

	for (i = 1; i < argc; i++)
	{
		check = isdigit(*argv[i]);
		if (check == 1)
		{
			printf("Error");
			return (1);
		}
		a = atoi(argv[i]);
		sum = sum + a;
	}
	printf("%d\n", sum);
	return (0);
}
