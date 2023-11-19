#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int l1 = 0, l2 = 0,s1_true = 1, s2_true = 1;
	long unsigned int dig1, dig2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	while (argv[1][l1] != '\0')
	{
		if (argv[1][l1] < 48 || argv[1][l1] > 57)
			s1_true = 0;
		l1++;
	}
	while (argv[2][l2] != '\0')
        {
		if (argv[2][l2] < 48 || argv[2][l2] > 57)
			s2_true = 0;
		l2++;
        }
	if (s1_true == 1 && s2_true == 1)
	{
		dig1 = atoi(argv[1]);
		dig2 = atoi(argv[2]);
		printf("%llu\n", dig1 + dig2);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
