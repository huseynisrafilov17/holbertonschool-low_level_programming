#include <stdarg.h>
#include <string.h>
#include <stdio.h>
/**
 * print_all - prints in all formats.
 * @format: formats string.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *s;
	int i = 0, put_comma = 0;

	va_start(ap, format);
	while (format != NULL && *(format + i) != '\0')
	{
		put_comma = 0;
		switch (*(format + i))
		{
			case 's':
				put_comma = 1;
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			case 'c':
				put_comma = 1;
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				put_comma = 1;
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				put_comma = 1;
				printf("%f", va_arg(ap, double));
				break;
			default:
				break;
		}
			if (*(format + i + 1) != '\0' && put_comma == 1)
				printf(", ");
			i++;
	}
	printf("\n");
	va_end(ap);
}
