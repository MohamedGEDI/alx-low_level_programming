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
	int sum;
	int i;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
			
		}
		
		printf("%d\n", sum);
	}
	return (0);
}
