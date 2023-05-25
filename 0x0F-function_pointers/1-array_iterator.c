#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include "function_pointers.h"


/**
 * array_iterator - executes function given as a parameter on element of array
 *@array : pointer
 *@size: number
 *@action : function
 * Return: nothing
 */



void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
	action(array[i]);

}
}

