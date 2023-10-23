#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: string.
 * Return: int.
 */
int _atoi(char *s)
{
	int sign, flag;
	unsigned int number;

	sign = 1;
	number = 0;
	flag = 1;
	while (*s != '\0')
	{
		if (*s > 47 && *s < 58)
		{
			number = number * 10 + ((int)*s - 48);
			if (*(s + 1) > 47 && *(s + 1) < 58)
			{
				flag = 1;
			}
			else
			{
				flag = 0;
			}
		}
		if (flag == 0)
		{
			break;
		}
		if (*s == 45)
		{
			sign = sign * -1;
		}
		s++;
	}
	return (sign * number);
}
