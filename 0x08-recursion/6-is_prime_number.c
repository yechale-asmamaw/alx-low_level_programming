#include "main.h"

/**
 * prime - evaluate 1 to n
 * @a: same number as n
 * @b: iterates from 1 to n
 *
 * Return: On success 1.
 */
int prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime(a, b + 1));
}
/**
 * is_prime_number - checks prime number
 * @n: Number Integer
 *
 * Return: On success 1.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
