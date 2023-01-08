#include "main.h"
/**
 *	is_prime - checks if an input is prime
 *	@n: number to check
 *	@c: iterator
 *
 *	Return: 1 if number is prime, 0 if not prime
*/
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
/**
 *	is_prime_number - checks if its a prime number
 *
 *	@n: number to check
 *
 *	Return: 1 prime number and 0 not prime number
*/
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
