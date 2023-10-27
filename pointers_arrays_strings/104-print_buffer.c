#include <stdio.h>
void print_buffer(char *b, int size)
{
	int i = 0;
	char *add;

	while (i <= size)
	{
		if (i % 10 == 0)
		{
			add = b + i;
			if (*b < 32)
				printf("%p: 0%x", add - b, *b);
			else
				printf("%p: %x", &(*(b + i)) - b, *b);
		}
		else if (i % 2 == 1)
		{
			if (*b < 32)
				printf("0%x ", *b);
			else
				printf("%x ", *b);
		}
		else
		{
			if (*b < 32)
				printf("0%x ", *b);
			else
				printf("%x ", *b);
		}
		i++;
	}
}
