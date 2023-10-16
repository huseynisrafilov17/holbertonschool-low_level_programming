#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;
	
	while (i<123)
	{
		putchar((char)i);
		i++;
	}
	i = 65;
	while (i<91)
	{
		putchar((char)i);
		i++;
	}
	putchar('\n');
	return (0);
}
