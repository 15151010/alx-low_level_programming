#include"main.h"

/**
 * _mamcpy - Custom memory copy function.
 *
 * @dest: The destination memory.
 * @src: The source memory.
 * @n: The number of bytes.
 * Return: A pointer to the destination memory (dest).
*/

char *_mamcpy(char *dest, char *src, unsigned int n)
{
	unsigned int opr;

	for (opr = 0; opr < n; opr++)
	{
		dest[opr] = src[opr];
	}
	return (dest);
}
