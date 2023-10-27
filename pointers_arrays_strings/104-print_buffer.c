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
			printf("%08x: %02x", &(*(b + i)) - b, *(b + i));
		}
		else if (i % 2 == 1)
		{
			printf("%02x ", *b);
		}
		else
		{
			printf("%02x", *b);
		}
		i++;
	}
}
