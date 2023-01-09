#include "main.h"
/**
 *	_strpbrk - searches a string for any set of bytes
 *	@s: pointer to input string
 *	@accept: pointer to string we are searching
 *	Return: a pointer to the byte in s that matches, or NULL if no match
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + 1);
			j++;
		}
		i++;
	}
	return ('\0');
}
