#include "main.h"

/**
 * _mamcpy - Custom memory copy function.
 *
 * @dest: The destination memory.
 * @src: The source memory.
 * @n: The number of bytes to copy.
 *
 * Description:
 * This function copies n bytes of memory from the source (src) to the
 * destination (dest). It provides a custom implementation of memory copying.
 *
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
