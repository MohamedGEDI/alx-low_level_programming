#include "search_algos.h"
/**
 * binary_search - seach sorted list while slashing in half
 * @array: list
 * @size: size of list
 * @value: value searched
 * Return: index or -1
*/
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = (int)size - 1;
	int mid;

	while (low <= high)
	{
		mid = (high + low) / 2;
		printf("searching in array:");
		for (int i = low; i <= high; i++)
		{
			printf(" %d", array[i]);
			if (i != high)
				printf(",");
		}
		printf("\n");
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
