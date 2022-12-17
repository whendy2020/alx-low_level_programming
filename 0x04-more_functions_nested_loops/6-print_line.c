#include "main.h"
/**
 *	print_line - printing lines
 *	@n: number of trees
 *
 *	Return: void
 *
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (1 = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
