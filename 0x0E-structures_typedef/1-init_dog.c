#include "dog.h"
/**
 *	init_dog - initializes dog struct
 *	@d: input pointer to struct dog
 *	@name: input for dog name
 *	@age: input fpr dog age
 *	@owner: inpuut for dog owner
 *
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		/*  d->name = name; */
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
