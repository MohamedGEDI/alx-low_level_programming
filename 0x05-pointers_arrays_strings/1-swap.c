#include "holberton.h"
/**
 *swap_int - swaps two intergers using their pointer addresses
 *@a: first int
 *@b:second int
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
