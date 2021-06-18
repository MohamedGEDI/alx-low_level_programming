#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return: always 0
*/
int main(void)
{
int x;
char y;
for (x = 10; x <= 19; x++)
{
putchar((x % 10) + '0');
}
for (y = 'a'; y <= 'f'; y++)
{
putchar(y);
}
putchar('\n');
return (0);
}
