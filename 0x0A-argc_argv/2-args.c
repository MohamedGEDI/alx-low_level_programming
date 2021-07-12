#include <stdio.h>
/**
 *main - main to print contents of argv
 *@argc: number of commands
 *@argv: command strings entered
 *Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
