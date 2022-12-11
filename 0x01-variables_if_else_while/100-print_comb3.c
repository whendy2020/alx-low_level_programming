#include <stdio.h>
/**
 *	main - hexa decimal possible combination ot two digits no repeat
 *
 *
 *
 *	Return: 0
*/
int main(void)
{
	int i, y;

	for (i = 48; i <= 56; i++)
	{
		for (y = 49; y <= 57; y++)
		{
			if (y > i)
			{
				putchar(i);
				putchar(y);

				if (i != 56 || y != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
