#include <stdio.h>
#include "function_pointers.h"
/**
 *	print_name - function that prints a name
 *	@name: char to display stdout
 *	@f: A pointer function
 *	author: Yewande Adeyeye
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
