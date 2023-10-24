#include"main.h"

/**
 * *_strchr - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @c: constant
 * Return:pointer to a
*/

char *_strchr(char *s, char c)
{
	int opr;

	for (opr = 0; s[opr] >= '\0'  ; opr++)
	{
		if (s[opr] == c)
		{
			return (s + opr);
		}
	}
	return ('\0');
}
