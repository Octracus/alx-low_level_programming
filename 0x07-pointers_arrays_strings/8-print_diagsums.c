#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *                  of a square matrix of integers
 * @a: pointer to start of matrix
 * @size: size of matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int tl_br = 0;
	int tr_bl = 0;

	for (i = 0; i < size; i++)
	{
		tl_br += *(a + size * i + i);
		tr_bl += *(a + size * (i + 1) - i - 1);
	}
	printf("%d, %d\n", tl_br, tr_bl);
}
