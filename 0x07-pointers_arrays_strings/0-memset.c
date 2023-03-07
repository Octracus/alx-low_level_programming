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
int main()
{
	char buffer[BUFSIZ];

	memset(buffer, '\0', BUFSIZ);
	puts("Buffer initialized");
	return(0);
}
