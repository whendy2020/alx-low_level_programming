#include <stdarg.h>
#include <stdio.h>
/**
 *	print_strings - a function that prints strings
 *	@separator: pointer to a constant separator
 *	@n: start of input variables
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;
	char *str;

	for (index = 0; index < n; index++)
	{
		str = va_arg(ap, char *);
		if (str)
			print("%s", str);
		else
			printf("(nil)");

		if (separator && index != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
