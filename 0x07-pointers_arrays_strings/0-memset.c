#include "main.h"
/**
 *	_memset - fills memory with a constant byte
 *	@s: input pointer
 *	@b: input variable
 *	@n: unsigned int variable the number of bytes to be filled
 *	Return: Memory filled with a constant
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (1 = 0; i < n; i++)
		s[i] = b;
	return (s);
}
