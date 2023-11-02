#include <stdio.h>
/**
 * main - Main entry point
 * @argc: int.
 * @argv: char arr.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", *argv[1] + *argv[2]);
	else
		printf("Error");
	return (0);
}
