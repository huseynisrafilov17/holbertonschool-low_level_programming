#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void)
{
	int a;
	srand((int)time(NULL));
	a = rand();
	return (a);
}
