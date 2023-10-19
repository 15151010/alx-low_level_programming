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
	int dest_len = 0;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append characters from src to dest */
	int src_index = 0;

	while (src[src_index] != '\0')
	{
		dest[dest_len] = src[src_index];
		dest_len++;
		src_index++;
	}

	return (dest);
}

