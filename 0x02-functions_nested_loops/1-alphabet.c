#include "main.h"

/**
 * print_alphabet in lower case
 *
 * Description: using putchar
 *
 * Return: void
 */


void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

