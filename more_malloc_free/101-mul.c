#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * isint - check if string is int.
 * @s: string
 * Return: 1 if true, 0 if false.
 */
int isint(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] < 48 || s[i] > 57)
			return (0);
	return (1);
}
/**
 * multiplication - multiplies
 * @s1: string.
 * @s2: string.
 * @result: pointer.
 * @length: length of allocated memory.
 */
void multiplication(char *s1, char *s2, char *result, int length)
{
	char *another_ptr = result + length, *inside_ptr;
	int i, j, carry_between = 0;
	int carry = 0, a;

	for (i = (int)strlen(s1) - 1; i >= 0; i--)
	{
		inside_ptr = another_ptr;
		for (j = (int)strlen(s2) - 1; j >= 0; j--)
		{
			if (*inside_ptr < 48 || *inside_ptr > 57)
				*inside_ptr = '0';
			if (j == 0)
				carry = carry + carry_between;
			a = carry + ((int)s1[i] - 48) * ((int)s2[j] - 48) + (int)*inside_ptr - 48;
			*inside_ptr = a % 10 + 48;
			if (j > 0)
				carry = a / 10;
			else
			{
				carry_between = a / 10;
				carry = 0;
			}
			inside_ptr--;
		}
		another_ptr--;
	}
	if (carry_between != 0)
		*inside_ptr = carry_between + 48;
	while (!(result[0] >= 48 && result[0] <= 57))
		for (i = 0; i <= length; i++)
			result[i] = result[i + 1];
	another_ptr = NULL;
	inside_ptr = NULL;
}
/**
 * main - Entry point.
 * @argc: argument count.
 * @argv: arguments.
 * Return: 1 or 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;
	char *str;

	if (argc != 3 || isint(argv[1]) != 1 || isint(argv[2]) != 1)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[1][0] == '0' || argv[2][0] == '0')
	{
		printf("0\n");
		return (0);
	}
	str = calloc(strlen(argv[1]) + strlen(argv[2]) + 1, sizeof(char));
	if (str == NULL)
	{
		printf("Failed");
		return (1);
	}
	str[strlen(argv[1]) + strlen(argv[2])] = '\0';
	multiplication(argv[1], argv[2], str, strlen(argv[1]) + strlen(argv[2]) - 1);
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	free(str);
	return (0);
}
