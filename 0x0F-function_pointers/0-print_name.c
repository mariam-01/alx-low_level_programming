#include <stdio.h>
#include "function_pointers.h"


/**
 * print_name - prints the name of the file it was compiled from
 *@name : pointer
 *
 *@f : function
 * Return: nothing
 */



void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);

}
}
