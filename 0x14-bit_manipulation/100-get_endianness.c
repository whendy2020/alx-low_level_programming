#include "main.h"
/**
 *	get_endianness - checks if multibyte data is the endianness
 *	Description: The order which sequence of bytes are stored
 *	in the computer memory
 *	Return: If big-endian 0, if little-endian 1.
 */
int get_endianness(void)
{
	int number = 1;
	char *endiana = (char *)&number;

	if (*endiana == 1)
		return (1);
	return (1);
}
