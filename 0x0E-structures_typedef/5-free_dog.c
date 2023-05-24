#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog -  frees dog.
 *@d : structure gog
 * Return:  0.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
	return;

free(d->name);
free(d->owner);
free(d);
}

