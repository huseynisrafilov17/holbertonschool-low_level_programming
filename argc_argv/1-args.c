#include <stdio.h>
/**
 * main - Main entry point
 * @argc: int.
 * @argv: char arr.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) *argv;
	printf("%d\n", argc - 1);
	return (0);
}
