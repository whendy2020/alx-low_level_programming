#include "main.h"
/**
 *	_isalpha - checks alphabets
 *
 *	@c: the character to be checked
 *
 *	Return: 1 if c is an alpha , 0 otherwise
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
