#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function
 *@argc: number of argc
 *@argv: string of argc
 *Return: 0
*/
int main(int argc, char *argv[])
{
	int x, y;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	op = argv[2];
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && (y == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(x, y));
	return (0);
}
