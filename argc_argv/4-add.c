#include <stdio.h>
#include <stdlib.h>
int isdigit(char *s)
{
	if (*s >= '0' && *s <= '9')
	{
		return (isdigit(s + 1));
	}
	else if (*s == '\0')
	{
		return (1);
	}
	return (0);
}
/**
 * main - Main entry point
 * @argc: int.
 * @argv: char arr.
 * Return: 0 or 1.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, a;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i]) == 0)
		{
			printf("Error");
			return (1);
		}
		a = atoi(argv[i]);
		sum = sum + a;
	}
	printf("%d\n", sum);
	return (0);
}
