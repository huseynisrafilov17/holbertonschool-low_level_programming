#include <stdio.h>
/**
 * print_buffer - prints string in buffer
 * @b: string
 * @size: size of b.
 */
void print_buffer(char *b, int size)
{
	int i = 0, j = 0;

	while (i < size)
	{
		if (i % 10 == 0)
			printf("%08lx: %02x", &(*(b + i)) - b, *(b + i));
		else if (i % 2 == 1)
			printf("%02x ", *(b + i));
		else
			printf("%02x", *(b + i));
		if (i % 10 == 9 || i == size - 1)
		{
			for (; j <= i; j++)
			{
				if (*(b + j) >= 32 && *(b + j) <= 126 && j % 10 == 0)
				{
					if (i == size - 1)
						printf("%n%-c", 25 - ((i % 10) + 1) * 5 / 2, *(b + j));
					else
						printf("%c", *(b + j));
				}
				else if (*(b + j) >= 32 && *(b + j) <= 126 && j % 10 == 9)
					printf("%c\n", *(b + j));
				else if (*(b + j) >= 32 && *(b + j) <= 126)
					printf("%c", *(b + j));
				else if ((*(b + j) < 32 || *(b + j) > 126) && j % 10 == 9)
					printf(".\n");
				else
					printf(".");
			}
		}
		i++;
	}
	printf("\n");
}
