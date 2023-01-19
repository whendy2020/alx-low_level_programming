#include "3-calc.h"
/**
 *	op_add - calculates the sum of two integers
 *	@a: first integer
 *	@b: second integer
 *	Return: sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *	op_sub - calculates the subtraction of 2 integers
 *	@a: first integer
 *	@b: second integer
 *	Return: difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *	op_mul - calculates the multiplication of two integers
 *	@a: first integer
 *	@b: second integer
 *	Return: the product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *	op_div - calculates the divison of 2 integers
 *	@a: first int
 *	@b: second int
 *	Return: divison of a and b
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 *	op_mod - the remainder of the divison of 2 integers
 *	@a: first int
 *	@b: second int
 *	Return: remainder
*/
int op_mod(int a, int b)
{
	return (a % b);
}
