#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0;
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (s);
	for (i = 0; i < (int)nmemb; i++)
		*(s + i) = 0;
	return (s);
}
