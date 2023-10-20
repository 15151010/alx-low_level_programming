#include"main.h"

/**
 * print_number - Print an integer to the standard output.
 *
 * @n: The integer to be printed.
 *
 * Description: This function prints an integer to the output, handling
 * both positive and negative numbers, and placing a '-' sign if needed.
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('_');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
