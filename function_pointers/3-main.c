#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - Entry point.
 * @argv: argument count.
 * @argc: argument array.
 * Return: 0.
 */
int main(int argv, char *argc[])
{
	int a;
	int b, c;
	int (*operation)(int, int) = get_op_func(argc[2]);

	if (argv != 4)
	{
		printf("Error\n");
		exit(98);
	}
	b = atoi(argc[1]);
	c = atoi(argc[3]);
	operation = get_op_func(argc[2]);
	if (operation != NULL)
	{
		a = operation(b, c);
		printf("%d\n", a);
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
}
