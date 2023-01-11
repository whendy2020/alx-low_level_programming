#include <stdio.h>
#include "main.h"
/**
 *	*create_array - creates an array of chars and initializes
 *	@size: size of the array to create
 *	@c: char to initalize the array
 *	Return: Returns a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	*(p + i) = '\0';

	return (p);
}
