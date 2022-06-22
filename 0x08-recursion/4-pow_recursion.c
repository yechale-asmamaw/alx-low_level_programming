#include "main.h"

/**
 * _pow_recursion - a to power of b
 * @a: Number Integer
 * @b: Power
 *
 * Return: 1/-1
 */
int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	return (a * _pow_recursion(a, b - 1));
}
