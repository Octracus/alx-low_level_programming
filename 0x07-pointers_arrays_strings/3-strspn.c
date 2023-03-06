#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: bytes to check for
 *
 * Return: number of bytes in the initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	while (*s)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
			{
				count++;
				break;
			}
		}
		if (!*p)
			break;
		s++;
	}
	return (count);
}
