#include "main.h"
/**
 *	_isdigit - check if the input is a digit
 *
 *	@c: value for the test
 *
 *	Return: 1 if c is a digit or 0 otherwise
*/
int _isdigit(int c)
{
	
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


