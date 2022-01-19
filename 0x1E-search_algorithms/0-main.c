#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - linear search  algorithm
 * @array: the array
 * @size: size of array
 * @value: value being searched 
*/
int main(void)
{
	int array[] = {10, 1, 42, 3, 4, 42, 6, 7, -1, 9};
	size_t size = sizeof(array) / sizeof(array[0]);
	
	printf("Search is starting\n");
	printf("Found %d at index: %d\n", 3, linear_search(array, size, 3));
	printf("Found %d at index: %d\n", 42, linear_search(array, size, 42));
	printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
	return (0);
}
