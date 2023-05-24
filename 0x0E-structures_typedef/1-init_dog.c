#include "dog.h"

/**
 * init_dog - check the code
 *@d : structure gog
 *@age : number
 *@name : pointer
 *@owner : pointer
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->age = age;
d->name = name;
d->owner = owner;

}
