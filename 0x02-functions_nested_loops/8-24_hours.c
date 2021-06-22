#include "holberton.h"
/**
 * jack_bauer - print 24 hours
 * Return: 0
*/
void jack_bauer(void)
{
	int fh;
	int lh;
	int fm;
	int lm;

	for (fh = 0; fh <= 2; fh++)
	{
		for (lh = 0; lh <= 9; lh++)
		{
			if (fh == 2 && lh == 4)
				break;
			for (fm = 0; fm <= 5; fm++)
			{
				for (lm = 0; lm <= 9; lm++)
				{
					_putchar(fh + '0');
					_putchar(lh + '0');
					_putchar(':');
					_putchar(fm + '0');
					_putchar(lm + '0');
					_putchar('\n');
				}
			}
		}
	}
}
