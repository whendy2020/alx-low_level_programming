#include "main.h"
/**
 *	_pow_recursion - calculate x raised to power y
 *	@x: number to raise the power
 *	@y: the number in exponent
 *
 *	Return: the calculated value
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
