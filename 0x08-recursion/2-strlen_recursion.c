#include "main.h"
/**
 *	_strlen_recursion - function to print the length of a string
 *
 *	@s: string to find length
 *
 *	Return: the length of string
*/
int _strlen_recursion(char *s)
{
	if (*S == '\0')
	return (0);

	else
	return (1 + _strlen_recursion(s + 1));
}
