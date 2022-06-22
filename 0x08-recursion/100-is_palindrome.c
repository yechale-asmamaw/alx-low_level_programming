#include "main.h"

/**
 * palind1 - get a length
 * @a: string
 * @l: integer to count length
 *
 * Return: On success 1.
 */
int palind1(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (palind1(a + 1, l + 1));
}
/**
 * palind2 - compare strings with reverse
 * @a: string
 * @l: length
 *
 * Return: On success 1.
 */

int palind2(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palind2(a + 1, l - 2));
}
/**
 * is_palindrome - checks string palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 */
int is_palindrome(char *s)
{
	int l;

	l = palind1(s, 0);
	return (palind2(s, l));
}
