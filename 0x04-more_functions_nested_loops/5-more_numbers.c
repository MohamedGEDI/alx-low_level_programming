#include "holberton.h"
/**
 * more_numbers - func to print numbers
*/
void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{

				k = i / 10;
				_putchar(k + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
