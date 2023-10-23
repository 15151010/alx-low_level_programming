#include "main.h"

/**
 * *_memset - fills memset with a constant byte.
 * @s: pointer to put the cunstant
 * @b: constant
 * @n: max bytas to URA
 * Return: pointar s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int opr;

	for (opr = 0; n > 0; opr++, n--)
	{
		s[opr] = b;
	}
	return (s);
}
