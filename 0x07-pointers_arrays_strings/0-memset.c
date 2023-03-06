#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * s: pointer to the memory area to fill
 * b: constant byte to fill with
 * n: number of bytes to fill
 *
 * Return: pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		s[n] = b;
	return (s);
}
