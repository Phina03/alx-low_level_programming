#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function that intializes a variable type
 * @d: variable to be initialized
 * @name: name of variable
 * @age: age of the variable
 * @owner: name of the owner
 * Return: Always 0
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
