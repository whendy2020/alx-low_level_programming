#include <stdio.h>
/**
 *	main - prints all arguments it receives one line at a time
 *	@argc: number of cmd line arguments
 *	@argv: array that contains cmd line arguments
 *	Return: 0 success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
