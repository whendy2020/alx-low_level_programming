#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *	main - adds positive numbers
 *	@argc: count of cmd line arguments
 *	@argv: array that contains cmdline arguments
 *	Return: 0 success
 *
*/
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				print("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
