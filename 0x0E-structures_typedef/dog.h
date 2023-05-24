
#ifndef dog_h
#define dog_h


/**
 *struct dog - a structure names dog
 *@name : pointer
 *@owner : pointer
 *@age : number
 * Return: 0
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
