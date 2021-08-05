#include "main.h"
/**
 * flip_bits - flip
 * @n: nums
 * @m: number of
 * Return: flipped bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int move = sizeof(unsigned long int) * 8;
	int dist = 0;

	while (move--)
		dist = dist + (n >> move & 1) != (m >> move & 1);

	return (dist);
}
