#include "main.h"
/**
 *	_memcpy - copy memory area
 *	@dest: buffer where we copy to
 *	@src: what we are to copy
 *	@n: n bytes of src
 *	Return: copied memory area
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
