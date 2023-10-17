#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{
	bool first = true;
	while (n != 98)
	{
		if (n > 98)
		{
			if (first)
			{
				printf("%d", n);
				n--;
				first = false;
			}
			else
			{
				printf(", %d", n);
				n--;
			}
		}
		else if (n < 98)
		{
			if (first)
                        {
                                printf("%d", n);
                                n++;
                                first = false;
                        }
                        else
                        {
                                printf(", %d", n);
                                n++;
                        }
		}
	}
	printf("98");
}
