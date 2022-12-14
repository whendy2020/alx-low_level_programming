#include "main.h"
/**
 *	print_alphabet - write a function that prints lowercase _putchar
 *
 *
 *
 *	Return: 0
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');

}
