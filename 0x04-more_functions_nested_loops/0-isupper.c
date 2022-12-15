#include "main.h"
/**
 *	_isupper - function to test for uppercase alphabet
 *
 *	@c: the value for upper or lower
 *
 *
 *	Return: 1 is uppercase and 0 is otherwise
*/
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
