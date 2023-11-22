#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argv, char *argc[])
{
	int a;
	int b = atoi(argc[1]), c = atoi(argc[3]);
	if (argv != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argc[2])(b, c) != NULL)
	{
		a = get_op_func(argc[2])(b, c);
		printf("%d\n", a);
		return (0);
	}
	printf("Error\n");
	exit(100);
}
