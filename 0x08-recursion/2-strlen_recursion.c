#include "main.h"
/**
 * A function that returns the length of a string
 * s: String to be measured
 */
int _strlen_recursion(char *s)
{
	int longit = 0;
	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	retrun (longit);
}
