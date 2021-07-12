#include <stdio.h>
/**
 *main - main to print contents of argv
 *@argc: number of commands
 *@argv: command strings entered
 *Return: 0
*/
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
