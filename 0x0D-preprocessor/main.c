#include <stdio.h>
#include "0-object_like_macro.h"
#include "1-pi.h"
#include "3-function_like_macro.h"
#include "4-sum.h"
int main(void)
{
	int i;
	float a;

	i = 98;
	a = i * PI;
	i = 98 + SIZE;
	printf("%d\n", i);
	printf("%f\n", a);
	printf("%d\n", ABS(12));
	printf("%d\n", ABS(-12));

	printf("%d\n", SUM(12, 18));
	printf("%d\n", SUM(12, 21));
}
