#include"main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 *
 * This function takes a pointer to a string and reverses the characters
 * in-place.
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	/* Find the length of the string*/
	int length = 0;

	while (s[length] != '\0')
		length++;

	/* Swap characters from both ends of the string*/
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		/* Swap s[i] and s[j]*/
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
