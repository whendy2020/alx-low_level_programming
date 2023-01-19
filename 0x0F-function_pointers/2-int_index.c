#include <stdio.h>
#include "function_pointers.h"
/**
 *	int_index - function to search for an integer
 *	@array: array to search in
 *	@size: size of the array
 *	@cmp: pointer to the function
 *	Return: the index of the first element for which the cmp function
 *	if doesnt return 0, -1 if no element matches or size is negative
*/
int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
