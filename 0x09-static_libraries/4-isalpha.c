#include "main.h"

/**
 * _isalpha - checks  alphabetic characters
 * @c: character to check
 *
 * Return: 0 or 1 for alphabet
 */


int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

