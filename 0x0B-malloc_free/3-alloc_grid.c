#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 *alloc_grid - fun to allocate grid
 *@height: parameter
 *@width: parameter 
 *Return: a multidimensional array
*/
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (height < 1 || width < 1)
		return (NULL);

	p = (int **)malloc(height * sizeof(*p));

	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(sizeof(**p) * width);
		if (p[i] == NULL)
		{
			while (i--)
				free(p[i]);
			free(p);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}


