#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 *@d : structure dog
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
if (d)
{
if (!(d->name) == NULL)
	printf("Name : %d", d->name);
else
	printf("(nil)");
if (!(d->age) == NULL)
	printf("Age : %f", d->age);
else
	printf("(nil)");
if (!(d->owner) == NULL)
	printf("Owner : %d", d->owner);
else
	printf("(nil)");
}
}
