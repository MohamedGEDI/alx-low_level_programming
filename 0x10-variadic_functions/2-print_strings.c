#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - prints strings with a string separator
 *@n: number of strings
 *@separator: string
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *nums;
	va_list args;

	va_start(args, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			nums = va_arg(args, char *);
			if (nums == NULL)
				printf("(nil)");
			else
				printf("%s", nums);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			nums = va_arg(args, char *);
			if (nums == NULL)
				printf("(nil)");

			else if ((i + 1) == n)
			{
				printf("%s", nums);
				break;
			}
			printf("%s%s", nums, separator);
		}
	}
	printf("\n");
	va_end(args);
}
