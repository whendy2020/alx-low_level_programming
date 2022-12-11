#include <stdio.h>
/**
 *	main - print all possible combinations of single figit nums
 *
 *
 *
 *	Return: Always 0 (Success)
*/
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
