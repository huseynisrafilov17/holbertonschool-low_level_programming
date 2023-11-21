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
	dog_t *new_dog;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(name));
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = malloc(sizeof(owner));
	new_dog->owner = owner;
	return (new_dog);
}
