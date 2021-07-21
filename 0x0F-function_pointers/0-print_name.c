#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - print name
 *@name: name parameter
 *@f: call back
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
