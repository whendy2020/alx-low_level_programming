#include <stdio.h>
/**
 *	print_numbers - print the numbers 0 to 9
 *	followed by a new line
 *	Return: 0
*/
void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n')
}
