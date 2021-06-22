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
	int next;
	int n = 50;
	int i = 0;

	printf("%d, %d\n", first, second);
	for (; i < n; i++)
	{
		printf("%d, ", next);
		first = second;
		second = next;
		next = first + second;
	}
	return (0);
}
