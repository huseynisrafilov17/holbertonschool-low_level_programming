#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - gets operation function
 * @s: operator.
 * Return: either pointer or NULL.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (ops[i].op != NULL)
	{
		if (*s == ops[i].op)
			return(ops[i].f);
		i++;
	}
	return (NULL);
}
