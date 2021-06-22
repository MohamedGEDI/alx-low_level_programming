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

	for (row = 1; row <= 9; row++)
	{
		_putchar(0 + '0');
		for (col = 0; col <= 9; col++)
		{
			res = row * col;
			if (res >= 10)
			{
				if (col == 9)
				{
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
					continue;
				}
				_putchar(',');
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else
			{
				if (col == 9)
				{
					_putchar((res % 10) + '0');
					continue;
				}
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
