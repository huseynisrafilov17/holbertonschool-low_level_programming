#include <stdlib.h>
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		free(ptr);
		return (new_ptr);
	}
	for (i = 0; i < (int)new_size; i++)
	{
		if (i >= (int)old_size)
			break;
		*((char *)new_ptr + i) = *((char *)ptr + i);
	}
	free(ptr);
	return (new_ptr);
}
