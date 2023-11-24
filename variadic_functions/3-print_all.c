#include <stdarg.h>
#include <string.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	va_list ap;
	char *s;
	int i = 0;

	va_start(ap, format);
	while (*(format + i) != '\0')
	{
		switch(*(format + i))
		{
			case 's':
				s = va_arg(ap, char *);
				if (s != NULL)
				{
					printf("%s", s);
					break;
				}
				printf("(nil)");
				break;
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			default:
				break;
		}
			if (*(format + i + 1) != '\0')
				printf(", ");
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
