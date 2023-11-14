#include <stdlib.h>
#include <string.h>
/**
 * _calloc - calloc.
 * @nmemb: member number.
 * @size: size of each member.
 * Return: pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	bzero(s, nmemb * size);
	return (s);
}
