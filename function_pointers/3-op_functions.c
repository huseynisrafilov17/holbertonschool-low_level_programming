#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add operator.
 * @a: number 1.
 * @b: number 2.
 * Return: sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract operator.
 * @a: number 1.
 * @b: number 2.
 * Return: result of subtraction.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication operator.
 * @a: number 1.
 * @b: number 2.
 * Return: result of multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division operator.
 * @a: number 1.
 * @b: number 2.
 * Return: result of division.
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - division modulus.
 * @a: number 1.
 * @b: number 2.
 * Return: result of modulus.
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
