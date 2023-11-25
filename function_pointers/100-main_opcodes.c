#include <stdio.h>
#include <stdlib.h>

void print_own_opcodes(int num_bytes) {
    if (num_bytes < 0) {
        fprintf(stderr, "Error\n");
        exit(2);
    }

    // Dummy code to get the address of the next instruction
    asm("call next\nnext: pop %%rax" : : : "rax");

    // Print the opcodes
    unsigned char *opcodes = (unsigned char *)print_own_opcodes;
    for (int i = 0; i < num_bytes; ++i) {
        printf("%02x", opcodes[i]);
        if (i < num_bytes - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Error\n");
        return 1;
    }

    int num_bytes = atoi(argv[1]);
    print_own_opcodes(num_bytes);

    return 0;
}
