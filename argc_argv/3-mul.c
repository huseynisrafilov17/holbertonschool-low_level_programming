#include <stdio.h>
/**
 * main - Main entry point
 * @argc: int.
 * @argv: char arr.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a,b;

	if (argc == 3)
	{
		a = (int)*argv[1] - 48;
		b = (int)*argv[2] - 48;
		printf("%d\n", a * b);
	}
	else
		printf("Error");
	return (0);
}
