#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return: always 0
*/
int main(void)
{
int x;
for (x = 10; x <= 19; x++)
{
putchar((x % 10) + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
