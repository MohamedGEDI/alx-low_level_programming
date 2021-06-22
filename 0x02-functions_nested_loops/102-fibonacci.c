#include "holberton.h"
#include <stdio.h>
/**
 * main - fibonnaci
 * Return: always 0
*/
int main(void)
{
	int first = 1;
	int second = 2;
	long int next;
	int n = 50;
	int i = 0;

	next = first + second;
	printf("%d, %d, ", first, second);
	for (; i < n; i++)
	{
		printf("%ld, ", next);
		first = second;
		second = next;
		next = first + second;
	}
	return (0);
}
