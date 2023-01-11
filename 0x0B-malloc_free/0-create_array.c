#include <stlib.h>
#include "main.h"
/**
 *	*create_array - creates an array of chars and initializes
 *	@size: size of the array to create
 *	@c: char to initalize the array
 *	Return: Returns a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
