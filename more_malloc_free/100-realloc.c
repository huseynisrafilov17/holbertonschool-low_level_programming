#include <stdlib.h>
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;
	void *new_ptr;

	new_ptr = malloc(new_size);
	if(new_ptr == NULL)
		return (NULL);
	for (i = 0; i < (int)new_size; i++)
	{
		if (i >= (int)old_size)
			break;
		*((char *)new_ptr + i) = *((char *)ptr + i);
	}
	free(ptr);
	return (new_ptr);
}