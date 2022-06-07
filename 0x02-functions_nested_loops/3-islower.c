#include "main.h"

/**
 * this will check for lowercase letters
 * use @c: character to check
 *
 * Return: 1 if lower case
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
