#include "main.h"
/**
 * get_bit - gets value of bit at given index
 * @n: number
 * @index: index within binary number starting from 0
 * Return: bit 0 or 1, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit, bin;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	bin = n >> index;/*right shift bitwise operator*/

	bit = bin & 1;/*AND bitwise operator*/

	return (bit);

}

