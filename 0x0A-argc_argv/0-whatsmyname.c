#include <stdio.h>
/**
 *	main - prints program name
 *	@argc: count of commandline arguments
 *	@argv: array that contains the program commandline arguments
 *	Return: 0 success
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
