#include "dog.h"
#include <stdlib.h>

/**
* free_dog - Frees dogs
* @d: Pointer to dog_t struct
*
*/

void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}

