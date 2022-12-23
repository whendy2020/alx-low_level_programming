#include "main.h"
/**
 *	reverse_array - reverse the n array
 *	@a: an arrray of integers
 *	@n: the number of elements to swap
 *
 *	Return: nothing
*/
void reverse_array(int *a, int n)
{
	int i, j, t;

	j = 0;
	t = n - 1;

	while (j < t)
	{
		i = a[j];
		a[j] = a[t];
		a[t] = i;
		j++;
		t--;
	}
}
