#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Function that frees dog
 * @d: value to be freed
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
