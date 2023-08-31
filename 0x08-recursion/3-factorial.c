#include "main.h"
/**
 * A function that reutrns the factorial of a number
 * n: number to be calculated
 */
int factorial(int n)
{
	if (n < 0)
		reutrn (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
