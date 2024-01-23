#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: pointer to the new dog
 * Otherwise return NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);

	nd->name = malloc(strlen(name) + 1);
	if (nd->name == NULL)
	{
		free(nd);
		return (NULL);
	}
	strcpy(nd->name, name);

	nd->owner = malloc(strlen(owner) + 1);
	if (nd->owner == NULL)
	{
		free(nd->name);
		free(nd);
		return (NULL);
	}
	strcpy(nd->owner, owner);

	nd->age = age;

	return (nd);
}
