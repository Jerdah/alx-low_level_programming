#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints elements of a dog
 * @d: a pointer to the struct dog to be printed
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %.6f\n", (d->age >= 0) ? d->age : 0.0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
