#include "main.h"
/**
 * Function that returns the valuw of x raised to the exponent of y
 * x: value to be raised
 * y: exponent
 */
int _pow_recursion(int x, int y)
{
	if (y <0)
		return (-1);
	if (y == 0)
		return (1);
	return ( x * _pow_recursion(x, y - 1));
}
