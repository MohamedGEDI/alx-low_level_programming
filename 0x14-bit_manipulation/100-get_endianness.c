#include "main.h"
/**
 *get_endianness -  get
 *Return: 1 or 0
*/
int get_endianness(void)
{
	unsigned int x = 0x12345678;
	char *c = (char *)&x;

	return (*c == 0x10);
}
