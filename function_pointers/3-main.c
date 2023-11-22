#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argv, char *argc[])
{
	int a;

	if (argv != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = get_op_func(argc[2])(atoi(argc[1]), atoi(argc[3]));
	printf("%d\n", a);
	return (0);
}
