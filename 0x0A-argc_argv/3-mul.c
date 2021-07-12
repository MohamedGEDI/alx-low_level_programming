#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - main to print contents of argv
 *@argc: number of commands
 *@argv: command strings entered
 *Return: 0
*/
int main(int argc, char *argv[])
{
	int mul;
	int first;
	int second;

	first = atoi(argv[1]);
	second = atoi(argv[2]);

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{

		first = atoi(argv[1]);
		second = atoi(argv[2]);
		mul = first * second;
		printf("%d\n", mul);

		return (0);
	}
}
