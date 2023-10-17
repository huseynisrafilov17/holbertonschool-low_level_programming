#include "main.h"
/**
 * _abs -  computes the absolute value of an integer.
 * @a: int.
 * Return: void.
 */
int _abs(int a)
{
	if (a > 0)
	{
		return (a);
	}
	else if (a < 0)
	{
		return (-1*a);
	}
	else
	{
		return (0);
	}
}
