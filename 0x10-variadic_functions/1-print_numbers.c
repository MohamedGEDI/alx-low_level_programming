#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - prints numbers with a string separator
 *@n: number of ints
 *@separator: string
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int nums;
	va_list args;

	va_start(args, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			nums = va_arg(args, int);
			printf("%d", nums);
			if ((i + 1) == n)
				printf("%d", nums);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			nums = va_arg(args, int);
			printf("%d%s", nums, separator);
			if ((i + 1) == n)
				printf("%d", nums);
		}
	}
	printf("\n");
	va_end(args);
}
