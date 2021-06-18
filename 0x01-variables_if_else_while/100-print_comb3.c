#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return: always 0
*/
int main(void)
{
int x;
int gap = 2;
for (x = 1; x < 90; x++)
{
if (x % 10 == 0)
{
x = x + gap;
gap++;
}
putchar((x / 10) + '0');
putchar((x % 10) + '0');
if (x == 89)
{
break;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
