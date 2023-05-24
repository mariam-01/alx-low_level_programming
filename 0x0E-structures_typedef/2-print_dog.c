#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 *@d : structure dog
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
if (d)
{
if (d->name)
	printf("Name : %s", d->name);
else
	printf("(nil)");
if (d->age)
	printf("Age : %f", d->age);
else
	printf("(nil)");
if (d->owner)
	printf("Owner : %s", d->owner);
else
	printf("(nil)");
}
}
