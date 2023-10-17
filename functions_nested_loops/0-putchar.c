#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char a[] = "_putchar\n";

	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
	}
	return (0);
}
