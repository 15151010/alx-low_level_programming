#include "main.h"

/**
 * _strspn - geta the length of a prefix substeing.
 *
 * @s: string.
 * @accept: bytes.
 * Return: unsigned int.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int opr, ope;

	for (opr = 0; s[opr] != '\0'; opr++)
	{
		for (ope = 0; accept[ope] != s[opr]; ope++)
		{
			if (accept[ope] == '\0')
				return (opr);
		}
	}
	return (opr);
}
