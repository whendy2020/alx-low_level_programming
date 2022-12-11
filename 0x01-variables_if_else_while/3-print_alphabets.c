#include <stdio.h>
/**
 *	main - upper and lower alphabet using putchar
 *
 *
 *
 *
 *	Return: 0
*/
int main(void)
{
	char low;
	char upper;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
