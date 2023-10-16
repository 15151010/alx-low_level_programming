#include "main.h"

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
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	putchar('\n');
}
