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
	int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	size_t size = sizeof(array) / sizeof(array[0]);
	
	printf("Search is starting\n");
	printf("Found %d at index: %d\n", 3, binary_search(array, size, 2));
	printf("Found %d at index: %d\n", 42, binary_search(array, 5, 5));
	printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
	return (0);
}
