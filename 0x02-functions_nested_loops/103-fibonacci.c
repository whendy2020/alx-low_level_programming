#include <stdio.h>
/**
 *	main - prints first 50 fibonacci numbers, starting with 1 and 2
 *
 *
 *
 *	Return: 0
*/
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);


		if (count == 49 &&  count > 4000000)
		{
			if ((sum % 2) == 0)
			{
				printf("\n");
			}
			printf("\n");
		}
		else
		{
			printf(", ");
		}
		fib1 = fib2;
		fib2 = sum;
	}
	return (0);
}
