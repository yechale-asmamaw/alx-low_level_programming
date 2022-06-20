#include "main.h"
/**
 * _memcpy - fills memory with another buffer.
 * @destination: source string
 * @source: string for filling
 * @n: length of buffer
 * Return: new string.
 */
char *_memcpy(char *destination, char *source, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(destination + i) = *(src + i);
		i++;
	}
	return (destination);
}
