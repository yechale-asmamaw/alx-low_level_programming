#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @c: source 
 * @b: the contant filling
 * @n: buffer length
 * Return: new string.
 */
char *_memset(char *c, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(c + i) = b;
		i++;
	}
	return (c);
}
