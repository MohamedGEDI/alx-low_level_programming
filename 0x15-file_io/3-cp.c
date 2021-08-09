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
	int fdfrom, fdto;
	int rcount;
	char buffer[1024];
	int closefrom, closeto;
	if (argc != 3)
	{
		exit(97);
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	}
	fdfrom = open(argv[1], O_RDONLY);
	if (fdfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	
	while ((rcount = read(fdfrom, buffer, 1024)) > 0)
	{
		if (fdto == -1|| write(fdto, buffer, rcount) != rcount)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (rcount == -1)
	{

		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	closefrom = close(fdfrom);
	if (closefrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdfrom);
		exit(100);
	}
	closeto = close(fdto);
	if (closeto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdto);
		exit(100);
	}
	return (0);
	
}
