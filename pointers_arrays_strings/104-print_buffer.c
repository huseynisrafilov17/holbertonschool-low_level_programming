#include <stdio.h>
void print_buffer(char *b, int size)
{
	int i = 0;
	char *add;
	long int diff;

	while (i <= size)
	{
		if (i % 10 == 0)
		{
			add = &(*(b + i));
			diff = &(*add) - &(*b);
			if (*b < 32)
				printf("%8x: 0%x", diff, *b);
			else
				printf("%8x: %x", &(*(b + i)) - b, *b);
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
