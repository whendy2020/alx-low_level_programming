#include <stdio.h>
#include "dog.h"
/**
 *	free_dog - free dogs struct pointer
 *	@d: pointer to free dogs
 *
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);

	}
}
