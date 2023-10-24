#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void)
{
	srand((int)time(NULL));
	int a = rand();
	return (a);
}
