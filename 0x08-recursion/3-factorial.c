#include "main.h"
/**
 * factorial -  reutrns the factorial of a number
 * @n: number to be calculated
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
