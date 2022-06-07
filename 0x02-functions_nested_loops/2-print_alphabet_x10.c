#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: Prints 10 times the alphabet with _putchar 
 *
 * Return: void
 */


void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
