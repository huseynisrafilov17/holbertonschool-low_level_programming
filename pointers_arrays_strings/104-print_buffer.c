#include <stdio.h>
void print_buffer(char *b, int size)
{
	int i = 0, j = 0;

	while (i <= size)
	{
		if (i % 10 == 0)
		{
			printf("%08lx: %02x", &(*(b + i)) - b, *(b + i));
		}
		else if (i % 2 == 1)
		{
			printf("%02x ", *(b + i));
		}
		else
		{
			printf("%02x", *(b + i));
		}
		if (i % 10 == 9)
		{
			for (; j <= i; j++)
			{
				if (*(b + j) >= 32 && j % 10 == 0)
				{
					printf("%35c", *(b + j));
				}
				else if (*(b + j) >= 32 && j % 10 == 9)
				{
					printf("%c\n", *(b + j));
				}
				else if (*(b + j) >= 32)
				{
					printf("%c", *(b + j));
				}
				else
				{
					printf(".");
				}
			}
		}
		i++;
	}
}
