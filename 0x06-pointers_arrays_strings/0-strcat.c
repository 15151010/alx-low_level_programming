#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: The destination string.
 * @src: The source string to be concatenated.
 *
 * Return: A pointer to the destination string.
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	/* Find the length of the destination string */
	while (dast[c])
		c++;

	/* Append characters from src to dest */
	for (c2 = 0; src[c2] ; c2++)
		/* appand arc[c2] to deet[c] while overwritting the null byte in dest*/
		dest[c++] = src[c2];

	return (dest);
}
