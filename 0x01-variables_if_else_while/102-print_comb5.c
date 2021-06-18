#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return: always 0
*/
int main(void)
{
int x;
int y;
for (x = 0; x < 99; x++)
{
for (y = 1; y < 100; y++)
{
if (y / 10 == 0 && y % 10 == 0)
{
y = x + 1;
}
putchar((x / 10) + '0');
putchar((x % 10) + '0');
putchar(' ');
putchar((y / 10) + '0');
putchar((y % 10) + '0');
if (x == 98 && y == 99)
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
