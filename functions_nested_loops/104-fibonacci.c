#include <stdio.h>
#include <inttypes.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	uint64_t a, b, s;
	uint64_t a_half1, b_half1, a_half2, b_half2, s_half1, s_half2;
	int c;
	a = 1;
	b = 2;
	c = 3;
	printf("%"PRIu64", %"PRIu64, a, b);
	while (c < 99)
	{
		if (c < 93)
		{
			s = a + b;
			a = b;
			b = s;
			c++;
			printf(", %"PRIu64, s);
		}
		else if (c == 93)
		{
			a_half1 = a / 10000000000;
			a_half2 = a % 10000000000;
			b_half1 = b / 10000000000;
			b_half2 = b % 10000000000;
			s_half1 = a_half1 + b_half1;
			s_half2 = a_half2 + b_half2;
			if (s_half2 > 9999999999)
			{
				s_half1 = s_half1 + (s_half2 / 10000000000);
				s_half2 = s_half2 - (s_half2 / 10000000000) * 10000000000;
			}
			a_half1 = b_half1;
			a_half2 = b_half2;
			b_half1 = s_half1;
			b_half2 = s_half2;
			printf (", %"PRIu64"%"PRIu64, s_half1, s_half2);
			c++;
		}
		else if (c > 93 && c <= 97)
		{
			s_half1 = a_half1 + b_half1;
			s_half2 = a_half2 + b_half2;
			if (s_half2 > 9999999999)
                        {
				s_half1 = s_half1 + (s_half2 / 10000000000);
				s_half2 = s_half2 - (s_half2 / 10000000000) * 10000000000;
                        }
			a_half1 = b_half1;
			a_half2 = b_half2;
			b_half1 = s_half1;
			b_half2 = s_half2;
			printf (", %"PRIu64"%"PRIu64, s_half1, s_half2);
			c++;
		}
		else
		{
			s_half1 = a_half1 + b_half1;
			s_half2 = a_half2 + b_half2;
			if (s_half2 > 9999999999)
			{
				s_half1 = s_half1 + (s_half2 / 10000000000);
				s_half2 = s_half2 - (s_half2 / 10000000000) * 10000000000;
			}
			printf (", %"PRIu64"%"PRIu64, s_half1, s_half2);
			c++;
		}

	}
	printf("\n");
	return (0);
}


