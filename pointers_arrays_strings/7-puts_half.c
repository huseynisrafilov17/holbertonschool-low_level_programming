#include "main.h"
#include <string.h>
void puts_half(char *str)
{
	int a;

	a = strlen(str);
	if (a % 2 == 0)
	{
		a = a / 2;
	}
	else
	{
		a = (a + 1) / 2;
	}
	while (*(str + a) != '\0')
	{
		_putchar(*(str + a));
		str++;
	}
}
