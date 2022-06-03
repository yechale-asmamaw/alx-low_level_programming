#include <stdio.h>
/**
 * main - 0-9 with no  char or printf/puts,
 * and putchar 2x max
(*
 * Return: 0 
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
