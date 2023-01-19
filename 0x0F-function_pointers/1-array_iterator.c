#include <stdio.h>
#include "function_pointers.h"
/**
 *	array_iterator - calls a function to act as an array element
 *	@array: Name of the array in which the function acts on
 *	@size: size of the passed array to function
 *	@action: the function that acts on the array elements
 *
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
