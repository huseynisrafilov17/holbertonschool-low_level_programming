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
	int (*operation)(int, int) = get_op_func(argv[2]);
	if (operation != NULL)
	{
		a = operation(argc[2])(b, c);
		printf("%d\n", a);
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}
