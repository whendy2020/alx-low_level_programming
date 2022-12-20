#include "main.h"
/**
 *	_strcpy - copy that string pointed to by src
 *
 *	@dest: char to check
 *	@src: char to check
 *
 *	@Return: 0 is success
*/
char *_strcpy(char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
