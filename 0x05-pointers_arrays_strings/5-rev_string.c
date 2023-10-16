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
	int l, i;
	char temp;

	/* find stering length without null char*/
	for (l = 0; s[l] != '\0'; ++l)
		;

	/* swap the string by looping to half the string*/
	for (i = 0; i < 1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i]; /* 1 because the array string from 0*/
		s[l - 1 - i] = temp;
	}
}
