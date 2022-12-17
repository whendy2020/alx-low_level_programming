#include "main.h"
/**
 *	print_line - printing lines
 *	@n: number of trees
 *
 *
 *
*/
void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			_putcha('_');
		}

		_putchar('\n');
	}
}
