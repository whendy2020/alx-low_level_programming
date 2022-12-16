#include <stdio.h>
/**
 *	void print_numbers - print the numbers 0 to 9
 *	followed by a new line
 *	@num: the value
 *
 *	Return: 0
*/
void print_numbers(void)
{
	char num;

	for (num = 48; num <= 58; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
