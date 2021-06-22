#include "holberton.h"
/**
 * times_table - 0-9 multiplication  table
 * Return: 0
*/
void times_table(void)
{
	int row;
	int col;
	int res;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			if (row == 0)
			{
				_putchar(0 + '0');
				continue;
			}
			res = row * col;
			if (res >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
