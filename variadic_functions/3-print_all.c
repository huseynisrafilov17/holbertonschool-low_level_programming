#include <stdarg.h>
#include <string.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap, format);
	while (*(format + i) != '\0' && (*(format + i) == 's' || *(format + i) == 'c'))
	{
		if (*format == 's')
		{
			printf("%s", va_arg(ap, char *));
			i++;
			continue;
		}
		printf("%c", va_arg(ap, int));
		i++;
	}
	i = 0;
	while (*(format + i) != '\0' && (*(format + i) == 'i' || *(format + i) == 'f'))
	{
		if (*format == 'i')
		{
			printf("%d", va_arg(ap, int));
			i++;
			continue;
		}
		printf("%f", va_arg(ap, double));
		i++;
	}
	va_end(ap);
}
