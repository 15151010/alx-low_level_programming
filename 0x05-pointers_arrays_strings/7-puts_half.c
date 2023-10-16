#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string.
 *
 * This function prints the second half of the given string. If the length
 * of the string is odd, it prints the middle character and the remaining
 * characters starting from the next index.
 */

void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
		length++;

	int start = length / 2;

	if (length % 2 != 0)
		start++;

	for (i = start; i < length; i++)
		putchar(str[i]);

	putchar('\n');
}
