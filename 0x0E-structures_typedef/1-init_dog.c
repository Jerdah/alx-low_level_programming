#include "dog.h"

/**
 * init_dog - function initializes a variable of type struct dog
 * including name, age and owner.
 * @d: a pointer to struct dog
 * @name: string holding the name of a dog
 * @age: number representing how old the dog is
 * @owner: string holding the name of the owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
