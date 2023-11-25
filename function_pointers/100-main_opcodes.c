#include <stdio.h>
#include <stdlib.h>

void print_own_opcodes(int num_bytes)
{
	unsigned char *opcodes;
	int i;

	if (num_bytes < 0) 
	{
		fprintf(stderr, "Error\n");
		exit(2);
	}
	asm("call next\nnext: pop %%rax" : : : "rax");
	opcodes = (unsigned char *)print_own_opcodes;
	for (i = 0; i < num_bytes; ++i) {
		printf("%02x", opcodes[i]);
		if (i < num_bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2) {
		fprintf(stderr, "Error\n");
		return 1;
	}
	num_bytes = atoi(argv[1]);
	print_own_opcodes(num_bytes);
	return (0);
}
