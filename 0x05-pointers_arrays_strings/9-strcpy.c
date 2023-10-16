#include"main.h"
/**
 * _strcpy - Copies a string from source to destination.
 *
 * @dest: The destination buffer where the string is copied.
 * @src: The source string to be copied.
 *
 * Return: A pointer to the destination string.
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
