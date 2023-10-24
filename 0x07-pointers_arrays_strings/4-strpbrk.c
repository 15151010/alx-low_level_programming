#include"main.h"

/**
 * _strpbrk - Locate the first occurrence of any character in a set.
 *
 * @s: The string to search.
 * @accept: The set of characters to search for.
 *
 * Description:
 * This functions a pointer to the first matching
 *
 * Return: A pointer to the first matching character or NULL if not found.
*/

char *_strpbrk(char *s, char *accept)
{
	int opr, ope;
	char *p;

	opr = 0;
	while (s[opr] != '\0')
	{
		if (accept[ope] != '\0')
		{
			p = &s[opr];
			return (p);
		}
		ope++;
	}
	return (0);
}
