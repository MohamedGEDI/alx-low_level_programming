#include "holberton.h"
/**
 * more_numbers - func to print numbers
*/
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(1 + '0');
			}
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
