#include <stdio.h>
#include <stdlib.h>
/**
 *	main - multiplies 2 integrs and print
 *	@argc: number of cmd line arguments
 *	@argv: array that contains the cmd line arguments
 *	Return: 0 sucess
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}