#include "main.h"
#include <string.h>
/**
 * main - cp source code 
 * @argc: number of arguments
 * @argv: string of arguments 
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int fdone, fdtwo;

	if (argc != 3)
	{
		exit(97);
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	}
	fdone = open(argv[1], O_RDONLY);
	if (fdone == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdtwo = open(argv[2], O_WRONLY | O_TRUNC);
	if (fdtwo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(99);
	}



	return (0);
	
}
