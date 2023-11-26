#include<stdio.h>
#include<stdlib.h>
/**
 * main- Entry point
 * @argc: the number of parameters.
 * @argv: the parameter.
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < n - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
