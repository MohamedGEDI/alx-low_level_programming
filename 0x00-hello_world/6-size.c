#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int i;
char c;
long int li;
long long int lli;
float f;

printf("Size of a char: %ld byte(s)", sizeof(c));
printf("Size of an int: %ld byte(s)", sizeof(i));
printf("Size of a long int: %ld byte(s)", sizeof(li));
printf("Size of a long long int: %ld byte(s)", sizeof(lli));
printf("Size of a float: %ld byte(s)", sizeof(f));

return (0);
}
