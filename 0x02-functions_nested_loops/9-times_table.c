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
			res = row * col;
			if (res >= 10)
			{
				if (col == 9)
				{
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
					continue;
				}
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if (col == 9)
				{
					_putchar((res % 10) + '0');
					continue;
				}
				_putchar((res % 10) + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
