#include <stdio.h>
/**
 * main - Main entry point
 * @argc: int.
 * @argv: char arr.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
