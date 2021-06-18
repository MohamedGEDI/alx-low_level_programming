#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return: always 0
*/
int main(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
