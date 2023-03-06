#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints all natural numbers from n to 98
 * n: starting number
 *
 * Return: void
 */
void print_numbers(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i < 98)
			printf(", ");
	}
	printf("\n");
}
