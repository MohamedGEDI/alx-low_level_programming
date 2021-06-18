#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
*/
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
last = n % 10;
if (last > 5)
{
printf("is %d is greater than 5\n", last);
}
else if (last < 6 && last != 0)
{
printf("is %d is less than 6 and not 0\n", last);
}
else
{
printf("is %d is 0\n", last);
}
return (0);
}
