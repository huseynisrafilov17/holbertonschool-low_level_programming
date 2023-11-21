#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - creares new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: NULL or pointer to struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog1;

	new_dog1 = malloc(sizeof(dog_t));
	if (new_dog1 == NULL)
		return (NULL);
	new_dog1->name = malloc(strlen(name) + 1);
	if (new_dog1->name == NULL)
	{
		free(new_dog1);
		return (NULL);
	}
	strcpy(new_dog1->name, name);
	new_dog1->age = age;
	new_dog1->owner = malloc(strlen(owner) + 1);
	if (new_dog1->owner == NULL)
	{
		free(new_dog1->name);
		free(new_dog1);
		return (NULL);
	}
	strcpy(new_dog1->owner, owner);
	return (new_dog1);
}
