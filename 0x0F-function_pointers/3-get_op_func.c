#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *get_op_func - func to get correct operation
 *@s: input string
 *Return: correct operation
*/
int (*get_op_func(char *s))(int a, int b)
{
	ops_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
