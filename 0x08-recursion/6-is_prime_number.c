#include "holberton.h"
#include <stdio.h>
/**
 *isPrime -firnd prime num
 *@n: argument
 *@a: second argument
 *Return: 1 or 0
*/
int isPrime(int n, int a)
{
	if (a == 1)
	{
		return (1);
	}
	else if (n % a == 0)
	{
		return (0);
	}
	return (isPrime(n, a - 1));

}
/**
 * is_prime_number - finds prime number
 * @n: argument
 * Return: 0
*/
int is_prime_number(int n)
{
	if (n < 3)
		return (0);
	isPrime(n, n / 2);
}
