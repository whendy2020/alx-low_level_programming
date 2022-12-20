#include "main.h"
/**
 *	print_rev - print a string in reverse
 *
 *	@s: the string to be revered
 *
 *
*/
void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;
	for (i = n - 1; i >= 0; i--)
	{
		_putchae(s[i]);
	}
	_putchar('\n');
}
